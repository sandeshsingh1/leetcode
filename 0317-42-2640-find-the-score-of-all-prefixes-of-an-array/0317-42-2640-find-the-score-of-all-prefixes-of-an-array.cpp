class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long>ans(n);
        //int max;
        // for(int i=0;i<n;i++)
        // {   max=nums[i];
        //     for(int j=0;j<=i;j++)
        //     {
        //         if(nums[j]>max)
        //         { 
        //             max=nums[j];
        //         }
        //          ans[i]=max;
        //     }
        // }
        //critical part of question is to find maximum till index;

    ans[0] = nums[0];
    for (int i = 1; i < n; i++) {
        ans[i] = (ans[i - 1]> nums[i])?ans[i-1]:nums[i]; // ans[i-1]abhi tak ka max hoga   bas usi se compare krna hai..
    }
        for(int i=0;i<n;i++)
        {
        ans[i]=nums[i]+ans[i];
        }
    // prefix sum
    for(int i=1;i<n;i++)
    {
        ans[i]=ans[i-1]+ans[i];
    }
    return ans;
    }
};