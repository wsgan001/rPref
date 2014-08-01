#' Better-Than-Graph
#' 
#' Returns a Hasse-Diagramm of a preference order (also called the Better-Than-Graph) on a given dataset to be plotted with the igraph package.
#' 
#' @param df A dataframe.
#' @param pref A preference on the columns of \code{df}, see \code{\link{psel}} for details.
#' 
#' @details This function returns a list \code{l} with the following list entries:
#' 
#' \describe{
#'   \item{\code{l$graph}}{An igraph object, created with the \code{\link{igraph}} package.}
#'   \item{\code{l$layout}}{A typical Hasse-diagram layout for plotting the graph, also created with igraph.}
#' }
#' 
#' To plot the resulting graph, use the \code{plot} function as follows: \code{plot(l$graph, layout = l$layout)}. 
#' For more details, see \code{\link{igraph.plotting}} and the examples below.
#' 
#' The Hasse diagram of a preference visualizes all the better-than-relationsships on a given dataset.
#' All the edges which can be retrieved by transitivity of the the order are omitted.
#' 
#' The names of the vertices are characters ranging from \code{"1"} to \code{as.character(nrow(df))} and they correspond to the row numbers of \code{df}.
#' 
#' @seealso \code{\link{igraph.plotting}}
#' 
#' @examples
#' 
#' # Pick a small data set and create preference / BTG 
#' df <- mtcars[1:10,]
#' pref <- high(mpg) * high(hp)
#' btg <- get_btg(df, pref)
#' 
#' # Create labels for the nodes with relevant values
#' labels <- paste0(df$mpg, "\n", df$hp)
#' 
#' # Plot the graph using igraph
#' library(igraph)
#' plot(btg$graph, layout = btg$layout, vertex.label = labels,
#'      vertex.size = 25)
#' 
#' # Add colors for the maxima nodes and plot again
#' colors <- rep(rgb(1,1,1), nrow(df))
#' colors[psel.indices(df, pref)] <- rgb(0,1,0)
#' plot(btg$graph, layout = btg$layout, vertex.label = labels,
#'      vertex.size = 25, vertex.color = colors)
#' 
#' # Show lattice structure of 3-dimensional Pareto preference
#' df <- merge(merge(list(x = 1:3), list(y = 1:3)), list(z = 1:2))
#' labels <- paste0(df$x, ",", df$y, ",", df$z)
#' btg <- get_btg(df, low(x) * low(y) * low(z))
#' plot(btg$graph, layout = btg$layout, vertex.label = labels, 
#'      vertex.size = 20)
#'
#' 
#' @export
get_btg <- function(df, pref) {

  # Calculate Hasse-Diagramm for pref on df
  scores <- pref$get_scorevals(1, df)$scores
  pref_serial <- pref$serialize()
  
  links <- t(get_hasse_impl(scores, pref_serial)) + 1
  
  # Create graph with all the vertices
  g <- graph.empty()
  g <- g + vertices(as.character(1:nrow(df)))

  # Add egdes for Better-Than-Graph
  g <- g + graph.edgelist(matrix(as.character(links), nrow(links), ncol(links)))

  # Calculate root (maxima)
  root <- as.character(psel.indices(df, pref))
    
  # Create layout
  layout <- layout.reingold.tilford(g, root = root)

  # Return everything
  return(list(graph = g, layout = layout))
}


