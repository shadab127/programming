/**
 * @Author: shadabKhan
 * @Date:   Thursday, August 22nd 2019, 8:22:40 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Thursday, August 22nd 2019, 8:49:54 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  vector<vector<int>>matrix(n,vector<int>(m,0));
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>matrix[i][j];
    }
  }
  vector<vector<int>>matrix2(n,vector<int>(m,0));
  vector<int>x,y;
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<m-1;j++)
    {
      if(matrix[i][j]==1&&matrix[i][j+1]==1&&matrix[i+1][j]==1&&matrix[i+1][j+1]==1)
      {
        matrix2[i][j]=1;
        matrix2[i][j+1]=1;
        matrix2[i+1][j]=1;
        matrix2[i+1][j+1]=1;
        x.push_back(i);
        y.push_back(j);
      }
    }
  }
  bool flag =true;
  for(int i=0;i<n;i++)
  {
    if(matrix[i]!=matrix2[i])
    {
      cout<<-1<<endl;
      flag=false;
      break;
    }
  }
  if(flag){
    cout<<x.size()<<endl;
    for(int i=0;i<x.size();i++)
    {
      cout<<x[i]+1<<" "<<y[i]+1<<endl;
    }
  }
}
