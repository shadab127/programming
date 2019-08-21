/**
 * @Author: shadabKhan
 * @Date:   Wednesday, August 21st 2019, 2:00:20 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Wednesday, August 21st 2019, 2:19:29 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,l,r;
  cin>>n>>l>>r;
  vector<int64_t>arr1(n,1);
  vector<int64_t>arr2(n,1);
  int64_t temp=1;
  for(int i=0;i<r;i++)
  {
    if(i<l)
    {
      arr1[i]=temp;
      arr2[i]=temp;
    }
    else if(i<r)
    {
      arr2[i]=temp;
    }
    temp=temp<<1;
  }
  temp=temp>>1;
  for(int i=r;i<n;i++)
  {
    arr2[i] = temp;
  }
  int64_t mini=0,maxi=0;
  for(int i=0;i<n;i++)mini+=arr1[i];
  for(int i=0;i<n;i++)maxi+=arr2[i];
  cout<<mini<<" "<<maxi<<endl;
}
