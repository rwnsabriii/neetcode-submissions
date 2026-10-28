class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int j=1;
        int n= nums.size();
        vector <int> ans;
        while(i!=n)
        {
        while(j!=n)
        {
            if(nums[i]+nums[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
            return ans;
            }
            j++;
        }
        i++;
        j=i+1;
        }
        
    }
};
