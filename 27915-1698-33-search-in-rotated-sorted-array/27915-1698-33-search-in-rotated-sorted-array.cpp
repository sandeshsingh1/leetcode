class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,mid,ans;
        //int n=e;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
              return mid;
            }
            else if(nums[mid]>= nums[0])
            { 
                 if(target<nums[mid] && target>=nums[s])
                 {
                            e=mid-1;
             
                  }
                  else
                  {
                        s=mid+1;
                  }
            }
            else 
            {
               if(target>nums[mid]&& target<=nums[e])
               {
                s=mid+1;
               }
               else 
               {
                e=mid-1;
               }
            
            }
        }
        
        return -1;
    }
};