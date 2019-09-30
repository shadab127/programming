/**
 * @Author: shadabKhan
 * @Date:   Wednesday, September 25th 2019, 10:06:08 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Wednesday, September 25th 2019, 10:52:12 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<pair<int,int> >arr1,arr2;
  for(int i=0;i<n;i++)
  {
    int x,y;
    cin>>x>>y;
    if(x>0)
    {
      arr1.push_back(make_pair(x,y));
    }
    else{
      arr2.push_back(make_pair(x,y));
    }
  }
  int64_t ans=0;
  sort(arr1.begin(),arr1.end());
  sort(arr2.begin(),arr2.end());
  reverse(arr2.begin(),arr2.end());
  if(arr1.size()==arr2.size())
  {
    for(int i=0;i<arr1.size();i++)
    {
      ans+=arr1[i].second;
    }
    for(int i=0;i<arr2.size();i++)
    {
      ans+=arr2[i].second;
    }
  }
  else{
    int mini= min(arr1.size(),arr2.size());
    if(arr1.size()==mini)
    {

        for(int i=0;i<arr1.size();i++)
        {
          ans+=arr1[i].second;
        }
        for(int i=0;i<mini+1;i++)
        {
          ans+=arr2[i].second;
        }
    }
    else{

        for(int i=0;i<mini+1;i++)
        {
          ans+=arr1[i].second;
        }
        for(int i=0;i<arr2.size();i++)
        {
          ans+=arr2[i].second;
        }
    }
  }
  cout<<ans<<endl;
}
