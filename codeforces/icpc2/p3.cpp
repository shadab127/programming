/**
 * @Author: shadabKhan
 * @Date:   Wednesday, September 25th 2019, 11:26:14 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Thursday, September 26th 2019, 12:32:32 am
 */
#include<bits/stdc++.h>
using namespace std;
int64_t find_ans(vector<map<int,int> >&tree,int source)
{
  cout<<"ll "<<source<<endl;
  vector<int> temp;
  for(auto it=tree[source].begin();it!=tree[source].end();it++)
  {
    if(tree[it->first].size()==0)
    {
        temp.push_back(it->second);
    }
    else{
      temp.push_back(it->first);
      temp.push_back(find_ans(tree,it->first));
    }
  }
  int64_t ans=0;
  int max=INT_MIN;
  for(int i=0;i<temp.size();i++)
  {
    ans+=2*temp[i];
    if(temp[i]>max)max=temp[i];
  }

  cout<<ans<<" "<<max<<endl;
  return ans-max;
}
int main()
{
  int n;
  cin>>n;
  vector<map<int,int> >tree(n);
  for(int i=0;i<n-1;i++)
  {
    int x,y,w;
    cin>>x>>y>>w;
    tree[x-1][y-1]=w;
    cout<<tree[x-1][y-1]<<endl;
  }
  cout<<tree[0].size()<<endl;
  cout<<tree[1].size()<<endl;
  cout<<tree[2].size()<<endl;
    cout<<find_ans(tree,0)<<endl;
}
