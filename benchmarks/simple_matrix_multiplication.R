library(tidyverse)

matrix_sizes <- 11:160

benchmarks <- tibble(
  matrix_size = vector(mode = "integer"),
  time = vector(mode = "numeric"),
  method = vector(mode = "character")
)

for (i in 1:length(matrix_sizes)) {
  size <- matrix_sizes[i]
  mat <- matrix(runif(size * size), ncol = size, nrow = size)
  
  x <- bench::mark(
    RcppPresentation::mat_mult_naive(mat, mat),
    RcppPresentation::mat_mult_naive_rcpp(mat, mat),
    #mat %*% mat, # the built-in, proper matrix multiplication is order of magnitudes faster than any naive approach
    time_unit = "s"
  )
  
  x <- tibble(
    matrix_size = rep(size, nrow(x)),
    time = x$median,
    method = x$expression %>% as.character()
  )
  benchmarks <- benchmarks %>% bind_rows(x)
}

ggplot(data = benchmarks, aes(x = matrix_size, y = time, color = method)) +
  theme_classic() +
  geom_line() 
