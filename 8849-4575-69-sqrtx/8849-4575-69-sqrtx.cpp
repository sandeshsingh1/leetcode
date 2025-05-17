class Solution {
public:
    int mySqrt(int x) {
        int s=0;
  int e=x-1;//length-1;
  long long mid;
int ans=0;
bool y=false;
  while(s<=e)
  {  if(x==1)return 1;
     
      mid=s+(e-s)/2;
      if(mid*mid==x)
      {return mid;
      y=true;
      break;}
      else if(mid*mid>x)e=mid-1;
      else{
          s=mid+1;
          ans=mid;
      }
  }
  if(y==false)return ans;
    
    return ans;
    }
};