class Solution {
public:
    int maxSatisfaction(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int suff1=INT_MIN;
        int suff;
        int k;
        for (int i = 0; i < n; i++) {
        suff = 0; // Reset the cumulative satisfaction score
        int k = 1; // Start multiplier from 1 for the first element
        
        // Calculate satisfaction for all elements starting from index i
        for (int j = i; j < n; j++) {
            suff += nums[j] * k; // Multiply current element with multiplier
            k++; // Increment the multiplier for next element
        }
        
        // Update maximum satisfaction if current is better
        if (suff > suff1) {
            suff1 = suff;
        }
    }
    if(suff1<0)return 0;
    else
    {
          return suff1;
     }
    }
  
};