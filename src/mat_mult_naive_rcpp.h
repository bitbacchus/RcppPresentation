#ifndef MAT_MULT_NAIVE_RCPP_H
#define MAT_MULT_NAIVE_RCPP_H
#include <Rcpp.h>

//' @export
// [[Rcpp::export]]
Rcpp::NumericMatrix mat_mult_naive_rcpp(Rcpp::NumericMatrix a, Rcpp::NumericMatrix b);

#endif // MAT_MULT_NAIVE_RCPP_H
