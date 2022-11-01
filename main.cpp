#include <iostream>
#include <cmath>
#include "function.h"
// Choose proper variable names
// Remember to define variables with the right data types

using namespace std;

int main(){
    // Test case scenarios
    /* r1 = 10, r2 = 10, r3 = 3: Current = 10.6667
     * r1 = 3, r2 = 11, r3 = 32: Current = 9.10985
    */

    float r1 = 3;
    float r2 = 11;
    float r3 = 32;
    cout << "Current = : " << current(r1,r2,r3) << endl;

    return 0;
}

