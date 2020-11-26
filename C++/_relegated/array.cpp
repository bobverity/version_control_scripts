
#ifdef RCPP_ACTIVE
#include <Rcpp.h>
#endif

#include <iostream>

#include "array.h"
#include "misc_v4.h"

using namespace std;

//------------------------------------------------
// constructors
array_2d_int::array_2d_int() {
  d1 = 0;
  d2 = 0;
}
array_2d_int::array_2d_int(int d1, int d2, int x) {
  init(d1, d2, x);
}

//------------------------------------------------
// initialise
void array_2d_int::init(int d1, int d2, int x) {
  if (d1 <= 0 || d2 <= 0) {
    string error_message = "array_2d_int initialised with non-positive dimension";
#ifdef RCPP_ACTIVE
    Rcpp::stop(error_message);
#else
    std::cerr << error_message;
    exit(0);
#endif
  }
  this->d1 = d1;
  this->d2 = d2;
  v = vector<vector<int>>(d1, vector<int>(d2,x));
}

//------------------------------------------------
// print
void array_2d_int::print() {
  print_matrix(v);
}
