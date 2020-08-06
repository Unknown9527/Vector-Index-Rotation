#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

//input 0
TEST(VectorRotationTest0, VectorRotationTest0) {
  Solution solution;

  vector<int> input0 = {1,2,3,4};
  int Rot0 = 0;
  vector<int> result0= {1,2,3,4};
 
  EXPECT_EQ(solution.VectorRotation(input0, Rot0), result0);
}

//input 1
TEST(VectorRotationTest1, VectorRotationTest1) {
  Solution solution;

  vector<int> input0 = {1,2,3,4};
  int Rot1 = 1;
  vector<int> result1= {4,1,2,3};
 
  EXPECT_EQ(solution.VectorRotation(input0, Rot1), result1);
}

//input 2
TEST(VectorRotationTest2, VectorRotationTest2) {
  Solution solution;

  vector<int> input0 = {1,2,3,4};
  int Rot2 = 2;
  vector<int> result2= {3,4,1,2};
 
  EXPECT_EQ(solution.VectorRotation(input0, Rot2), result2);
}

//input 3
TEST(VectorRotationTest3, VectorRotationTest3) {
  Solution solution;

  vector<int> input0 = {1,2,3,4};
  int Rot3 = 3;
  vector<int> result3= {2,3,4,1};
 
  EXPECT_EQ(solution.VectorRotation(input0, Rot3), result3);
}

//input 4
TEST(VectorRotationTest4, VectorRotationTest4) {
  Solution solution;

  vector<int> input0 = {1,2,3,4};
  int Rot4 = 4;
  vector<int> result4= {1,2,3,4};
 
  EXPECT_EQ(solution.VectorRotation(input0, Rot4), result4);
}

//input 5
TEST(VectorRotationTest5, VectorRotationTest5) {
  Solution solution;

  vector<int> input0 = {1,2,3,4};
  int Rot5 = 10;
  vector<int> result5= {3,4,1,2};
 
  EXPECT_EQ(solution.VectorRotation(input0, Rot5), result5);
}