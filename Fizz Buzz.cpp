#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector <string> result;
        string type;
        for(int i=1;i<=n;i++){
            type="";
            if(i%3==0){
                type=type+"Fizz";
            }
            if(i%5==0){
                type=type+"Buzz";
            }
            if(type==""){
               type=to_string(i);
            }
            result.push_back(type);
            }
        return result;
        
    }
};