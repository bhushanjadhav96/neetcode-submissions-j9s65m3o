#include <unordered_map>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int,bool> record;
        for(int i =0 ; i< nums.size(); i++)
        {
            if(record.find(nums[i]) != record.end())
            {
                return true;
            }
            record[nums[i]] = true;
        }
        return false;
    }
};