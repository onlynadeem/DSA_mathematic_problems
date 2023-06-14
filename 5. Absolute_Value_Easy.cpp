/*                             #made by nadeem
Given an integer N, The task is to find the absolute value of the given integer.

Examples: 

Input: N = -6 
Output: 6
Explanation: The absolute value of -6 is 6 which is non negative

Input: N = 12 
Output: 12 
*/

#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution{
    public:
        int absolute(int I) {
        if(I<0)
        {
            I=I-(2*I);
        }
        return I;
        }
};
int main() {
    int T;    // number of testcases
    cin >> T; // input number of testcases
    while (T--) {
        int I;
        cin >> I;
        Solution ob;
        cout << ob.absolute(I) << endl; // print the output
    }
    return 0;
} 
