#include <iostream>
using namespace std;

class Solution {
public:
    string reverseString(string s) {
        int size = s.size() ;
        for (int i=0 ; i<(size/2);i++)
            //交換s[0],s[n-1]....
            swap(s[i],s[size-i-1]);
        return s;
    }
};
int main(){
    Solution sol;
    string s= sol.reverseString("Hello");
    cout<<s + "\n";
    return 0;
}
