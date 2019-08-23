/**
 * @Author: shadabKhan
 * @Date:   Friday, August 23rd 2019, 2:55:21 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Friday, August 23rd 2019, 3:42:47 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int q;
  cin>>q;
  while(q--)
  {
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m,0));
    for(int i=0;i<n;i++)
    {
      string str;
      cin>>str;
      for(int j=0;j<m;j++)
      {
        if(str[j]=='*')arr[i][j]=1;
      }
    }
    int64_t rmax=0,rmaxindex=0,colmax=0,colmaxindex=0;
    for(int i=0;i<n;i++)
    {
      int temp=0;
      for(int j=0;j<m;j++)
      {
        temp+=arr[i][j];
      }
      if(temp>rmax)
      {
        rmaxindex=i;
        rmax=temp;
      }
    }
    for(int i=0;i<m;i++)
    {
      int temp=0;
      for(int j=0;j<n;j++)
      {
        temp+=arr[j][i];
      }
      if(temp>colmax)
      {
        colmaxindex=i;
        colmax=temp;
      }
    }
    int64_t ans=0;
    for(int i=0;i<m;i++)
    {
      if(arr[rmaxindex][i]==0)
      {
        arr[rmaxindex][i]=1;
        ans++;
      }
    }
    for(int i=0;i<n;i++)
    {
      if(arr[i][colmaxindex]==0)
      {
        arr[i][colmaxindex]=1;
        ans++;
      }

    }
    cout<<ans<<endl;
  }
}
