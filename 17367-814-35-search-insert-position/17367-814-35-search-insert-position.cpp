class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        bool y=false;
        int mid;
        int idx=0;
        while(s<=e)
        {
            if(target<=nums[0]){
                return 0;
                y=true;
                break;

            }
            mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                return mid;
                y=true;
                break;
            }
            else if(nums[mid]<target)s=mid+1;
            else{
                e=mid-1;
                idx=mid;
            }
        }
        if(y==false)return e+1;
        return idx;
    }
};