#include "mat_mult_naive_rcpp.h"


Rcpp::NumericMatrix mat_mult_naive_rcpp(Rcpp::NumericMatrix a, Rcpp::NumericMatrix b)
{
    // if this was a useful function, some sanity checks on the args would be needed...
    // I usually do these checks on the R side
 unsigned a_rows = a.nrow();
 unsigned b_rows = b.nrow();
 unsigned b_cols = b.ncol();

 Rcpp::NumericMatrix result(a_rows, b_cols);

 for (unsigned a_row = 0; a_row < a_rows; a_row++) {
   for (unsigned b_col = 0; b_col < b_cols; b_col++) {
     for (unsigned b_row = 0; b_row < b_rows; b_row++) {
       result(a_row, b_col) = result(a_row, b_col) + (a(a_row, b_row) * b(b_row, b_col));
     }
   }
 }

 return(result);
}
