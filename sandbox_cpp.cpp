
#include <Rcpp.h>

// [[Rcpp::export]]
double dmultinom1(const std::vector<int> &x, int x_sum, const std::vector<double> &p, double p_sum) {
  int k = int(p.size());
  double ret = 0;
  for (int i = 0; i < (k-1); ++i) {
    ret += R::dbinom(x[i], x_sum, p[i]/p_sum, true);
    x_sum -= x[i];
    p_sum -= p[i];
  }
  return ret;
}
