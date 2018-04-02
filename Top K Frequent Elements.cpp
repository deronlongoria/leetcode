#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int , int> m; 
        vector <int> result;
        for(auto num : nums){
            m[num]++;
        }
        vector <pair<int,int>> v; 
        for(auto iter = m.begin(); iter != m.end(); iter++){ 
            v.push_back(make_pair(-(iter->second),iter->first));
        }
        nth_element(v.begin(),v.begin()+k,v.end());
        for (int i=0;i<k;i++){
            result.push_back(v[i].second);
        }
        return result;
    }
};