#include <iostream>
using namespace std;

class Solution {
public:
    string reverseString(string s) {
        int size = s.size() ;
        int i;
        for ( i=0 ; i<(size/2);i++)
            swap(s[i],s[size-i-1]);
        return s;
    }
};
int main(){
    Solution sol;
    string s= sol.reverseString("Hello");
    cout<<s;
    return 0;
}
