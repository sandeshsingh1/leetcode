class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
      int e; 
      int s;
      long long sum1=0;
      int n=piles.size();
      for(int i=0;i<n;i++)
      {
        sum1=sum1+piles[i];
      }  
      s=(sum1+h-1)/h;
       for(int i=0;i<n;i++)
      {
        e=max(e,piles[i]);
      }  
      int ans,mid;
      int sum;
      while(s<=e)
      {  
        sum=0;
       
        mid=s+(e-s)/2;
        
        for(int i=0;i<n;i++)
        {
            if(mid!=0){
            sum+=(piles[i])/mid;
            if(piles[i]%mid)sum++;
            }
        }
        if(sum<=h)
        {
            e=mid-1;
            ans=mid;
        }
        else{
            s=mid+1;
        }   
      }
      return ans;
    }
};