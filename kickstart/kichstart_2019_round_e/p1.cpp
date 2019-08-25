/**
 * @Author: shadabKhan
 * @Date:   Sunday, August 25th 2019, 10:17:17 am
 * @Last modified by:   shadabKhan
 * @Last modified time: Sunday, August 25th 2019, 11:17:36 am
 */
#include<bits/stdc++.h>
using namespace std;
int64_t dfs(vector<vector<int>>&graph,int s,vector<bool>&visited)
{
  //cout<<s<<endl;
  int64_t tempcost=0;
  stack<int>mystack;
  mystack.push(s);
  visited[s]=true;
  while(!mystack.empty())
  {
    int curr=mystack.top();
    mystack.pop();
    for(int i=0;i<graph[curr].size();i++)
    {
      if(visited[graph[curr][i]]==0)
      {
        tempcost++;
        visited[graph[curr][i]]=true;
        mystack.push(graph[curr][i]);
      }
    }
  }
//  cout<<tempcost<<endl;
  return tempcost;
}
int main()
{
  int t;
  cin>>t;
  int loop=1;
  while(loop<=t)
  {
    int64_t n,m;
    cin>>n>>m;
    vector<vector<int>>graph(n);
    for(int i=0;i<m;i++)
    {
      int x,y;
      cin>>x>>y;
      graph[x-1].push_back(y-1);
      graph[y-1].push_back(x-1);
    }
    int64_t cost=0;
    vector<bool>visited(n,0);
    for(int i=0;i<n;i++)
    {
      if(visited[i]==0)
      {
        cost+=dfs(graph,i,visited);
        cost+=2;
      }
    }
    cout<<"Case #"<<loop<<": "<<cost-2<<endl;
    loop++;
  }
}
