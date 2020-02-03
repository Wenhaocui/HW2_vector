#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H
#include <vector>
#include <string>

class Solution {
public:
  void Unique(std::vector<int> &inputs);
  void UniqueSet(std::vector<int> &inputs);
  void Reverse(std::vector<int> &inputs);
  void DeleteOdd(std::vector<int> &inputs);
  std::vector<int> Combine(const std::vector<int> &inputs1, const std::vector<int> &inputs2);
  std::vector<int> Intersection(std::vector<int> &v1,std::vector<int> &v2);
};

#endif