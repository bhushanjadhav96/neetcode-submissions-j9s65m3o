class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> indexValue;
        vector<int> res;
        for(int i = 0 ; i < nums.size(); i++)
        {
            indexValue[nums[i]] = i; 
        }
        for(int i = 0 ; i < nums.size(); i++)
        {
            int final = nums[i] - target;
            final = -final;
            auto it = indexValue.find(final);
            if(it != indexValue.end() and it->second != i)
            {
                res.push_back(i);
                res.push_back(it->second);
                break;
            }
        }
        return res;
    }
};
