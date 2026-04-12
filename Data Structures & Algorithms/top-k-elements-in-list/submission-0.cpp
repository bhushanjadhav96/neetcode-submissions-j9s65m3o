class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> valueFrequency;
       for(int i = 0; i < nums.size(); i++)
       {
            valueFrequency[nums[i]]++;
       }
       std::map<int,vector<int>,std::greater<int>> res;
       for(auto key : valueFrequency)
       {
         res[key.second].push_back(key.first);
       }
       std::vector<int> sortedList;
       for(auto key : res)
       {
         for(auto elem : key.second)
         {
            sortedList.push_back(elem);
         }
       }
       vector<int> output;
       for(int i = 0 ; i < k ; i++)
       {
        output.push_back(sortedList[i]);
       }
       return output;
    }
};
