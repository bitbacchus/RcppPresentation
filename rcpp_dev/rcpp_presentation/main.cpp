#include "RInside.h"
#include "../../src/mat_mult_naive_rcpp.h"

using namespace Rcpp;

int main()
{
    RInside R; // opens an R session

    R.parseEvalQ("size <- 20");
    NumericMatrix a = R.parseEval("matrix(runif(size * size), ncol = size, nrow = size)");
    NumericMatrix b = R.parseEval("matrix(runif(size * size), ncol = size, nrow = size)");

    auto result = mat_mult_naive_rcpp(a, b);

    return 0;
}
