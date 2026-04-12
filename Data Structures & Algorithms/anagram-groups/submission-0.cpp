#include <array>
#include <string>
#include <map>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::array<int,26> key;
        map<std::array<int,26>,vector<string>> res;
        for(int i = 0; i < strs.size(); i++)
        {
            key.fill(0);
            for(auto stringChar : strs[i])
            {
                key[stringChar-97]++;
            }
            res[key].push_back(strs[i]);
        }
        vector<vector<string>> finalResult;
        for(auto mapKeys : res)
        {
            vector<string> anagrams;
            for(auto value : mapKeys.second)
            {
                anagrams.push_back(value);
            }
            finalResult.push_back(anagrams);
        }
        return finalResult;
    }
};
