class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        long long pre[n+1];//to calculte 'N'beefore that hour
       long long suff[n+1];//to calculate 'y' after and including that hour. kyunki shop is closed at that hour given hai
        pre[0]=0;
        for(int i=0;i<n;i++)
        {
            int count=0;
            if(customers[i]=='N')
            {
                count++;
            }
         pre[i+1]=pre[i]+count;// using prefix sum 

    }
    suff[n]=0;
for(int i=n-1;i>=0;i--)
 {
    int c=0;
    if(customers[i]=='Y')
    {
        c++;
      
    }
       suff[i]=suff[i+1]+c;

 }
 for(int i=0;i<=n;i++)
 {
    pre[i]=pre[i]+suff[i];
 }
 int min=pre[0];
 for(int i=1;i<n;i++)
 {
   if(pre[i]<pre[i-1])min=pre[i];
 }
  int minIndex = 0;
        for (int i = 1; i <= n; i++) {
            if (pre[i] < pre[minIndex]) {
                minIndex = i;
            }
        }
        
        return minIndex;
    }
};