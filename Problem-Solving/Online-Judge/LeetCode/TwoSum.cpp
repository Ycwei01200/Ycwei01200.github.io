#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> site;
        for(int i = 0 ; i < nums.size(); i ++){
            for(int l = i+1 ; l < nums.size(); l ++){
                if(nums[i]+nums[l]==target){
                    site.push_back(i);site.push_back(l);
                }
            }
        }
        return site;
    }
};
