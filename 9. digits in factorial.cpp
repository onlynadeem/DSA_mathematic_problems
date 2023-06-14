//                             #made by nadeem
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;
//User function Template for C++

class Solution{
    public:
    int digitsInFactorial(int N)
    {
        double digit=0;
        for(int i=1;i<=N;i++)
            digit+=log10(i);
        return floor(digit)+1;
    }
};

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling method digitsInFactorial()
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}
