#include "src/lib/solution.h"
#include "gtest/gtest.h"
using namespace std;

TEST(UniqueTest, HandleUnique) {
  Solution solution;
  vector<int> vec1 = {1 ,3 ,2 ,2 ,3 ,1 ,1 ,1 ,1 ,1};
  vector<int> vec2 = {1 ,3 ,2 ,2 ,3 ,1 ,1 ,1 ,1 ,1};
  solution.Unique(vec1);
  solution.Unique(vec2);
  std::vector<int> actual1 = vec1;
  std::vector<int> actual2 = vec2;
  std::vector<int> expected = {1, 2, 3};
  EXPECT_EQ(expected, actual1);
  EXPECT_EQ(expected, actual2);
}

TEST(ReverseTest, HandleReverse) {
  Solution solution;
  vector<int> vec3 = {1 ,3 ,2 ,2 ,3 ,1 ,1 ,1 ,1 ,1};
  solution.Reverse(vec3);
  std::vector<int> actual3 = vec3;
  std::vector<int> expected = {1, 1, 1, 1, 1, 3, 2, 2, 3, 1};
  EXPECT_EQ(expected, actual3);
}


TEST(DeleteOddTest, HandleDeleteOdd) {
  Solution solution;
  vector<int> vec4 = {1 ,3 ,2 ,2 ,3 ,1 ,1 ,1 ,1 ,1};
  solution.DeleteOdd(vec4);
  std::vector<int> actual4 = vec4;
  std::vector<int> expected = {2, 2};
  EXPECT_EQ(expected, actual4);
}

TEST(CombineTest, HandleCombine) {
  Solution solution;
  vector<int> vec5 = {1 ,3 ,2 ,2 ,3 ,1 ,1 ,1 ,1 ,1};
  vector<int> vec6 = {1 ,3 ,2 ,2 ,3 ,4, 5};
  vector<int> actual5 = solution.Combine(vec5,vec6);
  std::vector<int> expected = {1, 3, 2, 2, 3, 1, 1, 1, 1, 1, 1, 3, 2, 2, 3, 4, 5 };
  EXPECT_EQ(expected, actual5);

}

TEST(IntersectionTest, HandleIntersection) {
  Solution solution;
  vector<int> vec7 = {1 ,3 ,2 ,2 ,3 ,1 ,1 ,1 ,1 ,1};
  vector<int> vec8 = {1 ,3 ,2 ,2 ,3 ,4, 5};
  vector<int> actual6 = solution.Intersection(vec7,vec8);
  std::vector<int> expected = {1, 2, 2, 3, 3 };
  EXPECT_EQ(expected, actual6);

}