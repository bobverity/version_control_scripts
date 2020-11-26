
#pragma once

#include <vector>

//------------------------------------------------
// class defining 2d array of integers
class array_2d_int {
private:
  std::vector<std::vector<int>> z;
  int d1;
  int d2;
  
public:
  // constructors
  array_2d_int();
  array_2d_int(int d1, int d2, int x = 0);
  
  // operators
  int & operator ()(int i, int j) {return z[i][j];}
  
  // methods
  void init(int d1, int d2, int x = 0);
  void print();
};