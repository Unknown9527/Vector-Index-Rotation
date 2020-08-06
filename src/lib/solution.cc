#include "solution.h"
#include <map>


vector<int> Solution::VectorRotation (vector<int> & input0, int Rot){
    // create a vector for rotating
    vector<int> result1 = input0;

    int input_size = result1.size(); // find the size of result1

    int rotNum = Rot % 4;

    // use rotate function directly
    // since the question asks for moving to Right, therefore, the index should "ROT"
    // However, the index cannot be smaller than 0. Therefore, add the size of input
    rotate(result1.begin(), result1.begin()+ input_size - rotNum, result1.end());


    return result1;

}



