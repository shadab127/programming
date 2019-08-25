/**
 * @Author: shadabKhan
 * @Date:   Sunday, August 25th 2019, 12:11:23 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Sunday, August 25th 2019, 1:08:48 pm
 */
#include<bits/stdc++.h>
using namespace std;
int64_t count_odd_factors(int64_t n)
{
  if(n==1)return 1;
  int64_t count=0;
  for(int64_t i=1;i*i<=n;i=i+2)
  {
    if(n%i==0)
    {
      cout<<i<<endl;
      count+=2;
    }
  }
  if(n%2!=0)count++;
  return count;
}
int64_t count_even_factors(int64_t n)
{
  if(n==2)return 1;
  int64_t count=0;
  for(int64_t i=2;i*i<=n;i=i+2)
  {
    if(n%i==0)
    {
      cout<<i<<endl;
      count+=2;
    }
  }
  if(n%2==0)count++;
  return count;
}
int main()
{
  int t;
  cin>>t;
  int loop=1;
  while(loop<=t)
  {
    int64_t l,r;
    cin>>l>>r;
    int64_t ans=0;
    for(int64_t i=l;i<=r;i++)
    {
      int64_t even_factors=count_even_factors(i);
      int64_t odd_factors=count_odd_factors(i);
      if(abs(even_factors-odd_factors)<=2)
      {
        ans++;
      }
    }
    cout<<"Case #"<<loop<<": "<<ans<<endl;
    loop++;
  }
}
