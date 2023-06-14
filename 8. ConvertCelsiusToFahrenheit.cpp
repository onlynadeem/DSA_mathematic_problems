//                            #made by nadeem
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
//User function Template for C++

class Solution{
    public:
    //You need to complete this function
    double cToF(int C)
    {
        return C*(9.0/5.0) +32 ;
    }
};

int main()
{
    int T;//number of testcases
    int C,F;
    cin >> T; //input number of testcases
    while(T--){
        cin >> C;//input temperature in celscius
        Solution ob;
        cout << floor(ob.cToF(C)) << endl; //print the output
    }
    return 0;
}