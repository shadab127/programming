/**
 * @Author: shadabKhan
 * @Date:   Sunday, August 18th 2019, 7:27:13 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Sunday, August 18th 2019, 8:17:32 pm
 */

 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++)cin>>arr[i];
   int64_t cost=0;
   int countzero=0;
   int countnegative=0;
   for (int i = 0; i < n; i++) {
      if(arr[i]!=0)
      {
        if(arr[i]<0)
        {
          cost+=-1-arr[i];
          countnegative++;
        }
        else{
          cost+=arr[i]-1;
        }
      }
      else{
        countzero++;
      }
   }
   if(countnegative%2==0)
   {
     cout<<cost+countzero;
   }
   else{
     if(countzero==0)cout<<cost+2;
     else{
       cout<<cost+countzero;
     }
   }
 }
