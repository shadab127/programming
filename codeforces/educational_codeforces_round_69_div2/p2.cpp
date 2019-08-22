/**
 * @Author: shadabKhan
 * @Date:   Thursday, August 22nd 2019, 3:02:40 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Thursday, August 22nd 2019, 3:20:52 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++)cin>>arr[i];
  int max_index=0;
  for(int i=0;i<n;i++)
  {
    if(arr[max_index]<arr[i])
    {
      max_index=i;
    }
  }
  for(int i=max_index;i>0;i--)
  {
    if(arr[i-1]>arr[i])
    {
      cout<<"NO"<<endl;
      return 0;
    }
  }
  for(int i=max_index;i<n-1;i++)
  {
    if(arr[i+1]>arr[i])
    {
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
  return 0;
}
