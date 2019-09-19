/**
 * @Author: shadabKhan
 * @Date:   Wednesday, September 18th 2019, 9:48:06 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Wednesday, September 18th 2019, 10:12:42 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int64_t n;
  cin>>n;
  vector<vector<int64_t>>arr(n,vector<int64_t>(n,0));
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>arr[i][j];
    }
  }
  vector<int64_t>ans(n,0);
  ans[n-1]= sqrt((arr[0][n-1]*arr[1][n-1])/arr[0][1]);
  for(int i=0;i<n-1;i++)
  {
    ans[i]=arr[i][n-1]/ans[n-1];
  }
  for(int i=0;i<n;i++)
  {
    cout<<ans[i]<<" ";
  }
}
