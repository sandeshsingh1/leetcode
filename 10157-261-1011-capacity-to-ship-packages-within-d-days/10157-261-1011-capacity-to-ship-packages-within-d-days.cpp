class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int s=0;
       for(int i=0;i<weights.size();i++)
    {
        s=max(s,weights[i]);
    }
       int e=accumulate(weights.begin(), weights.end(), 0); 
       int mid;
       int ans;
       int page,count;
       while(s<=e)
       {
        page=0;
        count=1;
         mid=s+(e-s)/2;
         for(int i=0;i<weights.size();i++)
         {
            page+=weights[i];
            if(page>mid){
                count++;
                page=weights[i];
            }
         }
         if(count<=days)
         {
            ans=mid;
            e=mid-1;
         }
         else{
            s=mid+1;
         }
       }
       return ans;
    }
};