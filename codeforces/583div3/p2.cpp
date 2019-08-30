/**
 * @Author: shadabKhan
 * @Date:   Friday, August 30th 2019, 2:54:48 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Friday, August 30th 2019, 3:05:52 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  vector<int>arr(150000);
  while(t--)
  {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    int min=arr[n-1];
    int ans=0;
    for(int i=n-1;i>=0;i--)
    {
      if(arr[i]>min)ans++;
      else{
        min=arr[i];
      }
    }
    cout<<ans<<endl;
  }
}
