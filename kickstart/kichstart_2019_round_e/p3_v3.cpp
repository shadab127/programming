/**
 * @Author: shadabKhan
 * @Date:   Sunday, August 25th 2019, 12:11:23 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Sunday, August 25th 2019, 8:13:48 pm
 */
#include<bits/stdc++.h>
using namespace std;
int count_odd_factors(int n)
{
  int count=0;
  int i=1;
  for(;i*i<=n;i++)
  {
    if(n%i==0)
    {
        if(i%2!=0)
        {
            count++;

        }
    }
    if(i!=(n/i))
    {
        if((n/i)%2!=0)
        {
            count++;
        }
    }

  }
  return count;
}
int count_even_factors(int n)
{
  int count=0;
  int i=1;
  for(;i*i<=n;i++)
  {
    if(n%i==0)
    {a
        if(i%2==0)
        {
            count++;

        }
    }
    if(i!=(n/i))
    {
        if((n/i)%2==0)
        {
            count++;
        }
    }
  }
  return count;
}
int main()
{
  int t;
  cin>>t;
  int loop=1;
  vector<bool>memo(1e6+1,0);
  for(int i=1;i<=1e6;i++)
  {
    int even_factors=count_even_factors(i);
    int odd_factors=count_odd_factors(i);
    if(abs(even_factors-odd_factors)<=2)
    {
      memo[i]=1;
    }
  }
  while(loop<=t)
  {
    int l,r;
    cin>>l>>r;
    int ans=0;
    for(int i=l;i<=r;i++)
    {
      if(memo[i])ans++;
    }
    cout<<"Case #"<<loop<<": "<<ans<<"\n";
    loop++;
  }
}
