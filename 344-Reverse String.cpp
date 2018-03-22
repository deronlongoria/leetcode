#include <iostream>
using namespace std;

int main(){
    sol.reverseString("Hello";)
    Solution sol;
    cout<<s;
    return 0;
}

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