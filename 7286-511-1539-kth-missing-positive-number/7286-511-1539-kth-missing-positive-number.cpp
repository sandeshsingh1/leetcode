class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int s=0;
        int e=arr.size()-1;
        
   
     int mid;
     int idx=arr.size();//jab array me sare element hone 1 to n uske liye;
     while(s<=e)
     {
        mid=s+(e-s)/2;
       if(arr[mid]-mid-1>=k){
       idx=mid;
       e=mid-1;
     }
     else{
       s=mid+1;
     }
    }
    return idx+k;}
};