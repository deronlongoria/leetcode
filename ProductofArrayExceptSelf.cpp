
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