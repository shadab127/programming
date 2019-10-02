/**
 * @Author: shadabKhan
 * @Date:   Saturday, September 28th 2019, 3:05:07 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Monday, September 30th 2019, 7:47:05 pm
 */
#include<bits/stdc++.h>
using namespace std;
#define maxx 100000
unordered_map<int,int> mymap[maxx];
vector<bool> visited(maxx,0);
vector<int64_t>dominating_color(maxx);
vector<vector<int> >graph(maxx);
vector<int>colors(maxx);
void dfs(int source)
{
  visited[source]=1;
  for(auto destination : graph[source]){
    if(!visited[destination])
      dfs(destination);
  }
  int64_t sum=0,maxi=0;
  mymap[source].insert({colors[source],1});
  sum=colors[source],maxi=1;
  for(auto destination : graph[source]){
    for(auto key_value:mymap[destination]){
      if(mymap[source].find(key_value.first) != mymap[source].end()){
        mymap[source][key_value.first] += key_value.second;
      }
      else{
        mymap[source].insert({key_value.first,key_value.second});
        }
        if(mymap[source][key_value.first]>maxi){
          sum=key_value.first;
          maxi=mymap[source][key_value.first];
        }
        else if(mymap[source][key_value.first] == maxi){
          sum += key_value.first;
        }
      }
      mymap[destination].clear();
    }
    dominating_color[source]=sum;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  for(int i=0;i<n;i++)cin>>colors[i];
  for(int i=0;i<n-1;i++)
  {
    int x,y;
    cin>>x>>y;
    graph[x-1].push_back(y-1);
    graph[y-1].push_back(x-1);
  }
  dfs(0);
  for(int i=0;i<n;i++)
  {
    cout<<dominating_color[i]<<" ";
  }
}
