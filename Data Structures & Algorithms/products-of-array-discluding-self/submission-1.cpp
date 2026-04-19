class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int productOfAllNum = 1;
        int numOfZero = 0;
        int indexOfZero = 0;
        for(int i = 0; i< nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                indexOfZero = i;
                numOfZero++;
                continue;
            }
            productOfAllNum *= nums[i];
        }
        //cout<<productOfAllNum<<endl;
        vector<int> res(nums.size(), 0);
        //cout<<numOfZero;
        if(numOfZero > 1)
        {
            return res;
        }
        if(numOfZero == 1)
        {
            for(int i = 0 ; i < nums.size(); ++i)
            {
                if(i == indexOfZero)
                {
                    res[i] = productOfAllNum;
                }
            }
            return res;
        }
        for(int i = 0 ; i < nums.size(); ++i)
        {
            res[i] = productOfAllNum/nums[i];
        }
        return res;
    }

};
