/**
 * @Author: shadabKhan
 * @Date:   Saturday, September 28th 2019, 3:05:07 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Saturday, September 28th 2019, 10:40:13 pm
 */
#include<bits/stdc++.h>
using namespace std;
#define maxx 100000
map<int,int> mymap[maxx];

void dfs(vector<int>&dominating_color,vector<vector<int> >&graph,vector<int>&colors,int source)
{
  int sum=0,count=0;
  for(auto destination : graph[source]){
      dfs(dominating_color,graph,colors,destination);
      // if(p.first == -1)
      // {
      //   sum=p.first;
      //   count = p.second;
      // }
      // else{
      //   if(p.second > count)
      //   {
      //     sum = p.first;
      //     count=p.second;
      //   }
      //   else if (p.second == count){
      //     sum += p.first;
      //   }
      // }
  }
  cout<<"33 "<<sum<<" "<<count<<endl;
  if(graph[source].size()==0)
  {
    mymap[source].insert({colors[source],1});
    dominating_color[source] = colors[source];
    return;
  //  return {colors[source],1};
  }
  sum = colors[source];
  count =1;
  mymap[source].insert({colors[source],1});

  for(auto destination : graph[source]){
    cout<<"40 "<<source<<" "<<destination<<endl;
    for(auto key_value:mymap[destination])
    {
      cout<<"43 "<<key_value.first<<" "<<key_value.second<<endl;
      if(mymap[source].find(key_value.first) != mymap[source].end())
      {
        mymap[source][key_value.first] += key_value.second;
        if(mymap[source][key_value.first] > count)
        {
          sum = key_value.first;
          count = mymap[source][key_value.first];
        }
        else if(mymap[source][key_value.first] == count )
        {
          sum += key_value.first;
        }
      }
      else{
        mymap[source].insert({key_value.first,count});
        if(mymap[source][key_value.first] > count)
        {
          sum = key_value.first;
          count = mymap[source][key_value.first];
        }
        else if(mymap[source][key_value.first] == count )
        {
          cout<<"66 "<<sum<<" "<<count<<endl;
          sum += key_value.first;
        }
      }
    }
  }
  /*if(mymap[source].find(colors[source]) != mymap[source].end())
  {
    mymap[source][colors[source]] += 1;
    if(mymap[source][colors[source]] > count)
    {
      sum = colors[source];
      count = mymap[source][colors[source]];
    }
    else if(mymap[source][colors[source]] == count)
    {
      sum += colors[source];
    }
  }
  else{
    mymap[source].insert({colors[source],1});
    if(mymap[source][colors[source]] > count)
    {
      sum = colors[source];
      count = mymap[source][colors[source]];
    }
    else if(mymap[source][colors[source]] == count)
    {
      sum += colors[source];
    }
  }*/
  cout<<"99 "<<sum<<" "<<count<<endl;
  dominating_color[source] = sum;
  //return {sum,count};
}
int main()
{
  int n;
  cin>>n;
  vector<int>colors(n);
  for(int i=0;i<n;i++)cin>>colors[i];
  vector<vector<int> >graph(n);
  for(int i=0;i<n-1;i++)
  {
    int x,y;
    cin>>x>>y;
    graph[x-1].push_back(y-1);
  }
  vector<int> dominating_color(n);
  dfs(dominating_color,graph,colors,0);
  for(int i=0;i<n;i++)
  {
    cout<<dominating_color[i]<<" ";
  }
}
