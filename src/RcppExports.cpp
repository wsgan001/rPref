// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// get_hasse_impl
NumericVector get_hasse_impl(DataFrame scores, List serial_pref);
RcppExport SEXP rPref_get_hasse_impl(SEXP scoresSEXP, SEXP serial_prefSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type scores(scoresSEXP);
    Rcpp::traits::input_parameter< List >::type serial_pref(serial_prefSEXP);
    rcpp_result_gen = Rcpp::wrap(get_hasse_impl(scores, serial_pref));
    return rcpp_result_gen;
END_RCPP
}
// pref_select_top_impl
DataFrame pref_select_top_impl(DataFrame scores, List serial_pref, int N, double alpha, int top, int at_least, int toplevel, bool and_connected, bool show_levels);
RcppExport SEXP rPref_pref_select_top_impl(SEXP scoresSEXP, SEXP serial_prefSEXP, SEXP NSEXP, SEXP alphaSEXP, SEXP topSEXP, SEXP at_leastSEXP, SEXP toplevelSEXP, SEXP and_connectedSEXP, SEXP show_levelsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type scores(scoresSEXP);
    Rcpp::traits::input_parameter< List >::type serial_pref(serial_prefSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type top(topSEXP);
    Rcpp::traits::input_parameter< int >::type at_least(at_leastSEXP);
    Rcpp::traits::input_parameter< int >::type toplevel(toplevelSEXP);
    Rcpp::traits::input_parameter< bool >::type and_connected(and_connectedSEXP);
    Rcpp::traits::input_parameter< bool >::type show_levels(show_levelsSEXP);
    rcpp_result_gen = Rcpp::wrap(pref_select_top_impl(scores, serial_pref, N, alpha, top, at_least, toplevel, and_connected, show_levels));
    return rcpp_result_gen;
END_RCPP
}
// grouped_pref_sel_top_impl
DataFrame grouped_pref_sel_top_impl(List indices, DataFrame scores, List serial_pref, int N, double alpha, int top, int at_least, int toplevel, bool and_connected, bool show_levels);
RcppExport SEXP rPref_grouped_pref_sel_top_impl(SEXP indicesSEXP, SEXP scoresSEXP, SEXP serial_prefSEXP, SEXP NSEXP, SEXP alphaSEXP, SEXP topSEXP, SEXP at_leastSEXP, SEXP toplevelSEXP, SEXP and_connectedSEXP, SEXP show_levelsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type scores(scoresSEXP);
    Rcpp::traits::input_parameter< List >::type serial_pref(serial_prefSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type top(topSEXP);
    Rcpp::traits::input_parameter< int >::type at_least(at_leastSEXP);
    Rcpp::traits::input_parameter< int >::type toplevel(toplevelSEXP);
    Rcpp::traits::input_parameter< bool >::type and_connected(and_connectedSEXP);
    Rcpp::traits::input_parameter< bool >::type show_levels(show_levelsSEXP);
    rcpp_result_gen = Rcpp::wrap(grouped_pref_sel_top_impl(indices, scores, serial_pref, N, alpha, top, at_least, toplevel, and_connected, show_levels));
    return rcpp_result_gen;
END_RCPP
}
// pref_select_impl
NumericVector pref_select_impl(DataFrame scores, List serial_pref, int N, double alpha);
RcppExport SEXP rPref_pref_select_impl(SEXP scoresSEXP, SEXP serial_prefSEXP, SEXP NSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type scores(scoresSEXP);
    Rcpp::traits::input_parameter< List >::type serial_pref(serial_prefSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(pref_select_impl(scores, serial_pref, N, alpha));
    return rcpp_result_gen;
END_RCPP
}
// grouped_pref_sel_impl
NumericVector grouped_pref_sel_impl(List indices, DataFrame scores, List serial_pref, int N, double alpha);
RcppExport SEXP rPref_grouped_pref_sel_impl(SEXP indicesSEXP, SEXP scoresSEXP, SEXP serial_prefSEXP, SEXP NSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type scores(scoresSEXP);
    Rcpp::traits::input_parameter< List >::type serial_pref(serial_prefSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(grouped_pref_sel_impl(indices, scores, serial_pref, N, alpha));
    return rcpp_result_gen;
END_RCPP
}
