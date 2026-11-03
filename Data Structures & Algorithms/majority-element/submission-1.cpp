
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> ans;

        for(int i = 0; i < n; i++)
        {
            ans[nums[i]]++;
        }

        int m = ans.size();
        int max = ans[nums[0]];

        for(int i = 1; i < n; i++)
        {
            if(max < ans[nums[i]])
            {
                max = ans[nums[i]];
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(ans[nums[i]] == max)
                return nums[i];
        }

        return -1;
    }
};
