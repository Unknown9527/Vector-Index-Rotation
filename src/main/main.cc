#include <iostream>
#include "src/lib/solution.h"

// print the vector
void PrintVector(vector<int> & input){
    
    for(int i =0; i < input.size(); i++){
        cout << input[i] <<" ";
    }
    cout << endl;
}

// Vector Rotation
int main()
{
    Solution solution;

    vector<int> input0 = {1,2,3,4};    
    // int Rot = 2;
    int Rot = 10;
    vector<int> result = solution.VectorRotation(input0, Rot);
    PrintVector(result);
    

    return EXIT_SUCCESS;
}
