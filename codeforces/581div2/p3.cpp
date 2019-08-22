/**
 * @Author: shadabKhan
 * @Date:   Wednesday, August 21st 2019, 8:21:23 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Wednesday, August 21st 2019, 9:01:07 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<vector<int> >graph(n,vector<int>(n,9999));
  string str;
  for(int i=0;i<n;i++)
  {
    cin>>str;
    for(int j=0;j<str.length();j++)
    {
      if(str[j]=='1')graph[i][j]=1;
    }
  }
  int m;
  cin>>m;
  vector<int>p(m);
  for(int i=0;i<m;i++)cin>>p[i];

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      for(int k=0;k<n;k++)
      {
        if(graph[j][i]+graph[i][k]<graph[j][k])
        {
          graph[j][k]=graph[j][i]+graph[i][k];
        }
      }
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i==j)graph[i][j]=0;
      cout<<graph[i][j]<<" ";
    }
    cout<<endl;
  }
  vector<int>ans;
  ans.push_back(p[0]);
  for(int i=1;i<m;i++)
  {
    if(graph[ans[ans.size()-1]-1][p[i]-1]<i)
    {
      ans.push_back(p[i-1]);
    }
  }
  ans.push_back(p[p.size()-1]);
  cout<<ans.size()<<endl;
  for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";

}
