/**
 * @Author: shadabKhan
 * @Date:   Monday, September 23rd 2019, 8:03:00 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Wednesday, September 25th 2019, 1:37:53 am
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  map<int,int> freqcount;
  map<int,int> map;
  vector<int>arr1(n),arr2(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr1[i];
  }
  for(int i=0;i<n;i++)
  {
    cin>>arr2[i];
  }

  for(int i=0;i<n;i++)
  {
    int x,y;
    x=arr1[i];
    y=arr2[i];
    if(freqcount.find(x)==freqcount.end())
    {
      freqcount.insert({x,1});
      map.insert({x,y});
    }
    else{
      ((freqcount.find(x))->second)++;
      //cout<<"pol "<<(map.find(x))->second<<" "<<y<<endl;
      (map.find(x))->second = (map.find(x))->second + y;
      //cout<<"pol "<<x<<" "<<((freqcount.find(x))->second)<<" "<<(map.find(x))->second<<endl;
    }
  }
  if(n<=1)
  {
    cout<<0<<endl;
    return 0;
  }
  int64_t ans=0;
  int64_t maxi=0;

  int count=0;
  for(auto it=map.begin();it!=map.end();it++)
  {
    if(freqcount.find(it->first)->second>1)
    {
      if(it->first > maxi)maxi=it->first;
      ans+=(map.find(it->first))->second;
      cout<<it->first<<"  "<<(map.find(it->first))->second<<endl;
      cout<<"ll  "<<ans<<endl;
      count+=2;
    }
  }
  for(auto it=map.begin();it!=map.end();it++)
  {
    if(freqcount.find(it->first)->second==1  && it->first < maxi)
    {
      ans+=(map.find(it->first))->second;
      cout<<"pp  "<<ans<<endl;
      count++;
    }
  }
  if(count<=1)cout<<0<<endl;
  else
  cout<<ans<<endl;
}
