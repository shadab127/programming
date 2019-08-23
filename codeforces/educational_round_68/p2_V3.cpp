/**
 * @Author: shadabKhan
 * @Date:   Friday, August 23rd 2019, 3:47:03 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Friday, August 23rd 2019, 4:11:29 pm
 */
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
   int q;
   cin>>q;
   while(q--)
   {
     int n,m;
     cin>>n>>m;
     vector<vector<int>>arr(n,vector<int>(m,0));
     for(int i=0;i<n;i++)
     {
       string str;
       cin>>str;
       for(int j=0;j<m;j++)
       {
         if(str[j]=='*')arr[i][j]=1;
       }
     }
     vector<int>rsum(n,0);
     vector<int>colsum(m,0);
     for(int i=0;i<n;i++)
     {
       int temp=0;
       for(int j=0;j<m;j++)temp+=arr[i][j];
       rsum[i]=temp;
     }
     for(int i=0;i<m;i++)
     {
       int temp=0;
       for(int j=0;j<n;j++)temp+=arr[j][i];
       colsum[i]=temp;
     }
     int ans=INT_MAX;
     for(int i=0;i<n;i++)
     {
       for(int j=0;j<m;j++)
       {
         if(arr[i][j]==1)
         {
           if(ans>(n+m-1)-(rsum[i]+colsum[j]-1))
           {
             ans=(n+m-1)-(rsum[i]+colsum[j]-1);
           }
         }
         else{
             if(ans>(n+m-1)-(rsum[i]+colsum[j]))
             {
               ans=(n+m-1)-(rsum[i]+colsum[j]);
             }
         }
       }
     }
     cout<<ans<<endl;
   }
 }
