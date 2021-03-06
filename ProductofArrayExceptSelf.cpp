#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector <int> productExceptSelf (vector <int> & nums) {
        vector <int> result(nums.size(),1);
        int lproduct=1,rproduct=1;
        for(int i=1;i<nums.size();i++){
            lproduct*=nums[i-1];
            result[i]*=lproduct;
            rproduct*=nums[nums.size()-i];
            result[nums.size()-i-1]*=rproduct;
        }
        return result;
    }
};
/* Example:
   Input:[a,b,c,d]
   Expect:[bcd,acd,abd,abc]
     
   i=1 =>lproduct=a
         rproduct=d
         result=[1,a,d,1]
   
   i=2=> lproduct=ab
         rproduct=cd
         result=[1,acd,abd,1] 
         
   i=3=> lproduct=abc
         rproduct=bcd
         result=[bcd,acd,abd,abc] 
*/
