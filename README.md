  <!-- badges: start -->
  [![Launch Rstudio Binder](http://mybinder.org/badge_logo.svg)](https://mybinder.org/v2/gh/bitbacchus/RcppPresentation/master?urlpath=rstudio)
  <!-- badges: end -->
  
# Integration of C++ code in R with Rcpp

[Virtual HackyHour Göttingen
2020/07/21](https://pad.gwdg.de/HackyHourGoettingen_2020-07-21)

## What is the content of this talk? 

R is one of the most popular programming languages in science, and well suited for all data and stats centered tasks. In my field, Ecology, R is *lingua franca*. For reproducible science and re-usability of code in Ecology, you should ideally share your work in R.

R is fast for most day-to-day statistics-centered scripting tasks, but it is rather slow for general-purpose programming. Therefore, R developers use C/C++ or Fortran libraries to speed up computation-heavy parts of their packages. Writing and linking such libraries was relatively cumbersome until Rcpp was available.

Rcpp integrates C++ code seamlessly into R. It is both, an R package and a C++ library. It compiles C++ from within R and "automagically" links the library to R's API.

### Preliminary schedule
- (My) Motivation to use R + Rcpp
- How and why Rcpp works
- Demo
    - Rcpp intro in RStudio
    - How to use RInsde to develop Rcpp code in C++ IDEs (here: Qt Creator)

## Links
- [Presentation Slides](https://bitbacchus.github.io/RcppPresentation/slides/rcpp_presentation.html)
- [How to make an R-Package with Rcpp in RStudio](http://hanss.info/sebastian/post/setup-rcpp-package/)
- [Setup Qt Creator to develop and debug Rcpp code](http://hanss.info/sebastian/post/rcpp-qtcreator/)

### Useful Websites
- [Rcpp for everyone](https://teuder.github.io/rcpp4everyone_en/)
- [Rewriting R code in C++](https://adv-r.hadley.nz/rcpp.html)
- [Rcpp attributes](https://cloud.r-project.org/web/packages/Rcpp/vignettes/Rcpp-attributes.pdf)
- [Collection of Rcpp examples](https://gallery.rcpp.org/)
- [Rcpp on Github](https://github.com/RcppCore/Rcpp)

