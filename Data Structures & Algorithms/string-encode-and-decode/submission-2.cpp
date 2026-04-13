
class Solution {
public:

    string encode(vector<string>& strs) {
        string combineString;
        for(int i = 0; i < strs.size(); i++)
        {
            combineString += to_string(strs[i].length());
            combineString +='#';
            for(auto chars : strs[i])
            {
                combineString += chars;
            }
            
        }
        return combineString;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string decodedString;
        int num = 0;
        int mul = 0;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == '#')
            {
                while(num--)//4#abcd 0,1,2,3,4,5
                {
                    i++;
                    decodedString += s[i];
                }
                res.push_back(decodedString);
                decodedString.clear();
                num = 0;
                mul = 0;
                continue;
            }
            num = (num * pow(10,1))+(s[i] - 48);
            mul++;
        }
        return res;
    }
};
