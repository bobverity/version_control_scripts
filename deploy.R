
# deploy.R
#
# Author: Bob Verity
# Date: 2020-09-30
#
# Purpose:
# Simple script for testing out functions.
#
# ------------------------------------------------------------------

# TODO
# - find way to unit test C++ functions
# - if can find way of profiling C++ code then can drop RCPP_ACTIVE flag
# - hash-defined DEBUGMODE with added checks

library(Rcpp)

# source C++ function
sourceCpp("sandbox_cpp.cpp")


x <- c(0,0,4)
p <- c(1,0,1)
dmultinom1(x, sum(x), p, sum(p))
dmultinom(x, prob = p, log = TRUE)
