/**
 * @Author: shadabKhan
 * @Date:   Monday, August 19th 2019, 10:45:57 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Tuesday, August 20th 2019, 12:24:10 am
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int64_t n,m,k;
  cin>>n>>m>>k;
  vector<int64_t>arr(m);
  for(int i=0;i<m;i++)
  {
    cin>>arr[i];
  }
  int i=0;
  int64_t count=0;
  int64_t ans=0;
  while(i<m)
  {
    if((arr[i]-count)%k==0)
    {
      ans++;
      count++;
      i++;
      continue;
    }
    int64_t temp=(arr[i]-count)/(k);
    int64_t r;
    r=(temp+1)*(k);
    int64_t currPages=0;
    while(i<m&&(arr[i]-count)<=r)
    {
      i++;
      currPages++;
    }
    count+=currPages;
    ans++;
  }
  cout<<ans<<endl;
}
