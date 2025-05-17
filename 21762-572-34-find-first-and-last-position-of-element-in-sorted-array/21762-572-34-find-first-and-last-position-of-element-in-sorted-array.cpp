class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //first occurence 
        int s=0;
        int e=nums.size()-1;
        int mid;
        bool y =false;
        vector<int>a(2);
        while(s<=e)
        {
          mid=s+(e-s)/2;
          if(nums[mid]==target)
          {
            a[0]=mid;
            e=mid-1;
            y=true;
          }
          else if(nums[mid]<target)s=mid+1;
          else{ e=mid-1;}
        }
        if (y==false)a[0]=-1;
         s=0;
        e=nums.size()-1;
        y=false;
        
        while(s<=e)
        {
          mid=s+(e-s)/2;
          if(nums[mid]==target)
          {
            a[1]=mid;
             s=mid+1;
             y=true;
          }
            else if(nums[mid]<target)s=mid+1;
          else 
          {e=mid-1;}
        }
         if (y==0)a[1]=-1;
        return a;
    }
};