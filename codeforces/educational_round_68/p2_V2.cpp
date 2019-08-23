/**
 * @Author: shadabKhan
 * @Date:   Friday, August 23rd 2019, 3:47:03 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Friday, August 23rd 2019, 3:57:01 pm
 */
 #include<bits/stdc++.h>
 using namespace std;
 int cost(int x,int y,vector<vector<int>>&arr)
 {
   int c=0;
   int n=arr.size();
   int m=arr[0].size();
   if(arr[x][y]==0)c++;
   for(int i=x-1;i>=0;i--)
   {
     if(arr[i][y]==0)c++;
   }
   for(int i=x+1;i<n;i++)
   {
     if(arr[i][y]==0)c++;
   }
   for(int i=y-1;i>=0;i--)
   {
     if(arr[x][i]==0)c++;
   }
   for(int i=y+1;i<m;i++)
   {
     if(arr[x][i]==0)c++;
   }
   return c;
 }
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
     int c=INT_MAX;
     for(int i=0;i<n;i++)
     {
       for(int j=0;j<m;j++)
       {
         int temp=cost(i,j,arr);
         if(temp<c)
         {
           c=temp;
         }
       }
     }
     cout<<c<<endl;
   }
 }
