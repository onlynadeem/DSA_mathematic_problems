//                             #made by nadeem
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

//User function Template for C++

class Solution{
    public:
        long long sumUnderModulo(long long a,long long b)
    {
        return(a%1000000007+b%1000000007)%1000000007;
    }
};

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    Solution ob;
	    cout<<ob.sumUnderModulo(a,b)<<endl;
	}
	return 0;
} 