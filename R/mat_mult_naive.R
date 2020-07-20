#' @export
mat_mult_naive <- function(a, b) {
  # if this was a useful function, some sanity checks on the args would be needed...
  a_rows <- nrow(a)
  b_rows <- nrow(b)
  b_cols <- ncol(b)
  result <- matrix(data = 0, ncol = b_cols, nrow = a_rows)
  
  for (a_row in 1:a_rows) {
    for (b_col in 1:b_cols) {
      for (b_row in 1:b_rows) {
        result[a_row, b_col] <- result[a_row, b_col] + (a[a_row, b_row] * b[b_row, b_col])
      }
    }
  }
  return(result)
}