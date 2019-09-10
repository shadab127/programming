#include<bits/stdc++.h>
using namespace std;
int64_t gcd(int64_t x,int64_t y)
{
  if(y==0)return x;
  return gcd(y,x%y);
}
int main()
{
  int64_t n,m;
  cin>>n>>m;
  vector<int64_t>arr1(n);
  vector<int64_t>arr2(m);
  for(int i=0;i<n;i++)
  {
    cin>>arr1[i];
  }
  for(int i=0;i<m;i++)
  {
    cin>>arr2[i];
  }
  for(int i=1;i<n;i++)
  {
    arr1[i] = arr1[i]-arr1[0];
  }
  int64_t temp=arr1[1];
  for(int i=1;i<n;i++)
  {
      temp=gcd(arr1[i],temp);
  }
  for(int i=0;i<m;i++)
  {
    if(temp%arr2[i]==0)
    {
      cout<<"YES"<<endl;
      cout<<arr1[0]<<" "<<i+1<<endl;
      return 0;
    }
  }
  cout<<"NO"<<endl;
  return 0;
}
