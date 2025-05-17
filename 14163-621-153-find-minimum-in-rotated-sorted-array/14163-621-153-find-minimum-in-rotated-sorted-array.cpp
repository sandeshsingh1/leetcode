class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=nums[0],s=0,e=nums.size()-1,mid;
        while(s<=e)
        {   mid=s+(e-s)/2;
            if(nums[mid]>=nums[0])
            {
                s=mid+1;
    
            }
            else 
            {
                e=mid-1;
                ans=nums[mid];
            }
        }
        return ans;
        
        
        
    }
};