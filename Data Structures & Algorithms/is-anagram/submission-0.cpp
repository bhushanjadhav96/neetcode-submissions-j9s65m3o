class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<char,int> stringSFrequency;
      unordered_map<char,int> stringTFrequency;
      if(s.size() != t.size())
      {
        return false;
      } 
      for(int i = 0; i < s.size(); i++)
      {
        stringSFrequency[s[i]]++;
        stringTFrequency[t[i]]++;
      }
      if(stringSFrequency == stringTFrequency)
      {
        return true;
      }
      return false;
    }
};
