#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,z;
  cin>>n>>z;
  vector<int>arr(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  unrdered_map<int,int>mymap;
  for(int i=0;i<n;i++)
  {
    auto itr = mymap.find(arr[i]);
    if(itr!=mymap.end())
    {
      mymap.insert(make_pair(arr[i],1));
    }
    else{
      (itr->second)++;
    }
  }
}
