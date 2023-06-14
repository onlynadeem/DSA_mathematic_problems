/*                             #made by nadeem             */
#include <bits/stdc++.h>
using namespace std;
// User function Template for C++

class Solution{
    public:
        int absolute(int I) {
        if(I>=0)return I;
        else return (-I);
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