/**
 * @Author: shadabKhan
 * @Date:   Sunday, August 18th 2019, 10:18:45 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Sunday, August 18th 2019, 11:25:10 pm
 */

 #include<bits/stdc++.h>
 using namespace std;
 int gettemp(int currtemp,int k,int m)
 {
   int temp_at_home;
   if(k==currtemp)return currtemp;
   if(k<currtemp)
   {
     if(m>=currtemp-k)
     {
       return k;
     }
     else{
       return currtemp-m;
     }
   }
   else{
     if(m>=k-currtemp)
     {
       return k;
     }
     else{
       return currtemp+m;
     }
   }
 }
 int main()
 {
   int t;
   cin>>t;
   while(t--)
   {
     int n,m,k,l,r;
     cin>>n>>m>>k>>l>>r;
     vector<pair<int,int>>arr;
     for(int i=0;i<n;i++)
     {
       int c,p;
       cin>>c>>p;
       arr.push_back(make_pair(p,c));
     }
     sort(arr.begin(),arr.end());
     int i=0;
     for(;i<n;i++)
     {
       int currtemp=arr[i].second;
       int temp_at_home = gettemp(currtemp,k,m);
       if(temp_at_home >= l&&temp_at_home<=r)
       {
         cout<<arr[i].first<<endl;
         break;
       }
     }
     if(i==n)
     {
       cout<<-1<<endl;
     }
   }
 }
