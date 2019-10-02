/**
 * @Author: shadabKhan
 * @Date:   Saturday, September 28th 2019, 3:05:07 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Monday, September 30th 2019, 8:00:19 pm
 */
#include<bits/stdc++.h>
using namespace std;
#define maxx 100000
map<int,int>* mymap[maxx];
vector<bool> visited(maxx,0);
vector<int64_t>dominating_color(maxx);
vector<int>dominating_color_count(maxx);
vector<vector<int> >graph(maxx);
vector<int>colors(maxx);

void dfs(int source,int parent)
{
  visited[source]=1;
  for(auto destination : graph[source]){
    if(!visited[destination]){
      dfs(destination,source);
    }
  }
  int64_t sum=0,maxi=0;

  for(auto destination : graph[source]){
    if(destination==parent)continue;
    map<int,int>*u = new map<int,int>;
    map<int,int>*v = new map<int,int>;
  //  cout<<"33 "<<source<<" "<<destination<<endl;
    if((*mymap[source]).size() >= (*mymap[destination]).size()){
      u = mymap[source];
      v = mymap[destination];
      sum = dominating_color[source];
      maxi = dominating_color_count[source];
    }
    else{
      u= mymap[destination];
      v= mymap[source];
      sum = dominating_color[destination];
      maxi = dominating_color_count[destination];
    }
    for(auto key_value : *v){
    //  cout<<"58 "<<key_value.first<<" "<<key_value.second<<endl;
      if((*u).find(key_value.first) != (*u).end()){
        (*u)[key_value.first] += key_value.second;
      }
      else{
        (*u).insert({key_value.first,key_value.second});
        }
        if((*u)[key_value.first]>maxi){
          sum=key_value.first;
          maxi=(*u)[key_value.first];
        }
        else if((*u)[key_value.first] == maxi){
          sum += key_value.first;
        }
      }
      mymap[source] = u;
      dominating_color[source]=sum;
      dominating_color_count[source] = maxi;
    }
}
int main()
{
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
  for(int i=0;i<n;i++)
  {
    mymap[i] =  new map<int,int>;
    (*mymap[i]).insert({colors[i],1});
    dominating_color[i] = colors[i];
    dominating_color_count[i] = 1;
  }
  dfs(0,-1);
  for(int i=0;i<n;i++)
  {
    cout<<dominating_color[i]<<" ";
  }
}
