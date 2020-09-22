class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int keys[100000];
        int values[100000]={0};
        for(int i=0;i<nums.size();i++)
        {
            int comphash=target-nums[i];
            comphash=(comphash<0?comphash+100000:comphash)%100000;
            while(values[comphash])
            {
                if(target-nums[i]==keys[comphash])
                {
                    vector<int> v;
                    v.push_back(i);
                    v.push_back(values[comphash]-1);
                    return v;
                }
                comphash++;
            }
             comphash=nums[i];
            comphash=(comphash<0?comphash+100000:comphash)%100000;
            keys[comphash]=nums[i];
            values[comphash]=i+1;
            
        }
        vector<int> v1;
        return v1;
        
     
    }
};