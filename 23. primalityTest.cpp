//                             #made by nadeem
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool isPrime(int N)
    {
        if(N==1)return true;
        if(N<=0)return false;
        int x=ceil(sqrt(N));
        for(int i=2;i<=x;i++){
            if(N%i==0)return false;
        }
        return true;
    }

};

int main()
{
    int T; //testcases
    cin>>T; //input testcases
    while(T--) //while testcase have not been exhausted
    {
        int N;
        cin>>N; //input n
        Solution ob;
        if(ob.isPrime(N)) 
            cout<<"Yes";
        else
            cout<<"No";
            
        cout << endl;
    }
    return 0;
}