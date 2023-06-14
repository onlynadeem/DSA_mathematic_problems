//                            #made by nadeem
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        vector <int> av;
        int d=b*b-4*a*c;
        if(d>0){
            int x=floor((-b-sqrt(d))/(2*a));
            int y=floor((-b+sqrt(d))/(2*a));
            if(x>=y){
                 av.push_back(x);
                 av.push_back(y);
            }else {
                av.push_back(y);
                av.push_back(x);
            }
        
        }else
        if(d==0){
            int x=floor(-b/(2*a));
            av.push_back(x);
            av.push_back(x);
        }else{
            av.push_back(-1);
        }
        return av;
    }
};
int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
} 