/**
 * @Author: shadabKhan
 * @Date:   Saturday, September 21st 2019, 12:55:22 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Saturday, September 21st 2019, 1:13:59 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<pair<int,int>>arr(n);

  for(int i=0;i<n;i++)
  {
    int temp;
    cin>>temp;
    arr[i]={temp,i+1};
  }
  sort(arr.begin(),arr.end());
  reverse(arr.begin(),arr.end());
  int64_t ans=0;
  for(int i=0;i<n;i++)
  {
    ans+= (arr[i].first )*i + 1;
  }
  cout<<ans<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i].second<<" ";
  }

}
