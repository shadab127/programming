/**
 * @Author: shadabKhan
 * @Date:   Tuesday, September 17th 2019, 6:44:08 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Tuesday, September 17th 2019, 7:10:20 pm
 */
#include<bits/stdc++.h>
using namespace std;
int ans=0;
unorderd_map<pair<int,int>,int>mymap;
void findsum(auto arr,int sum,int i,int j,int m)
{
  if(i>j)return;
  if((sum-arr[i])%m==0)
  {
    if(ans<sum)ans=sum;
  }
  if((sum-arr[j])%m==0)
  {
    if(ans<sum)ans=sum;
  }
  if((sum-arr[i]-arr[j])%m==0)
  {
    if(ans<sum)ans=sum;
  }
  findsum(arr,sum,i+1,j,m);
  findsum(arr,sum,0,j-1,m);
  findsum(arr,sum,i+1,j-1,m);
}
int main()
{
  int n,m;
  cin>>n>>m;
  vector<int>arr(n);
  int sum=0;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    sum+=arr[i];
  }
  int j=n-1;
  if(sum%m==0)
  {
    cout<<sum/m<<endl;
  }
  else{
    findsum(arr,sum,0,n-1,m);
    cout<<ans/m<<endl;
  }
}
