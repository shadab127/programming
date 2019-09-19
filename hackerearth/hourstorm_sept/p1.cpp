/**
 * @Author: shadabKhan
 * @Date:   Saturday, September 14th 2019, 9:41:40 am
 * @Last modified by:   shadabKhan
 * @Last modified time: Saturday, September 14th 2019, 10:55:43 am
 */
#include<bits/stdc++.h>
using namespace std;
vector<int> count(int n,vector<vector<int>>arr)
{
  vector<int> temp(32,0);
  for(int i=0;i<32;i++)
  {
    if((1<<i)&n)temp[i]=1;
  }
//  cout<<"vec"<<endl;
//  for(auto x:temp)cout<<x<<" ";
//  cout<<endl;
  if(arr.size()==0)
  {
    return temp;
  }
  else{
    for(int i=0;i<32;i++)temp[i]+=arr[arr.size()-1][i];
    return temp;
  }
}
int xor_(vector<vector<int>>arr,int x,int y)
{
  int ans=0;

  vector<int>temp(32,0);
  if(x==0)
  {
    temp=arr[y];
    for(int i=0;i<32;i++)temp[i]=temp[i]%2;
  }
  else{
    for(int i=0;i<32;i++)
    {
      temp[i] = (arr[y][i] - arr[x-1][i])%2;
    }
  }
  for(int i=0;i<32;i++)
  {
    if(temp[i])
    {
      ans = ans^(1<<i);
    }
  }
//  cout<<" ans "<<ans<<endl;
  return ans;
}
int main()
{
  int q;
  cin>>q;
  vector<vector<int>>forward;
  vector<vector<int>>backward;
  while(q--)
  {
    int type;
    cin>>type;
    if(type==1)
    {
      int temp;
      cin>>temp;
      forward.push_back(count(temp,forward));
    }
    else if(type==2)
    {
        int temp;
        cin>>temp;
        backward.push_back(count(temp,backward));
    }
    else{
      int x,y;
      cin>>x>>y;
      if(x<=forward.size()&&y<=forward.size())
      {
        cout<<xor_(forward,forward.size()-y,forward.size()-x)<<endl;
      }
      else if(x>forward.size()&&y>forward.size())
      {
        x=x-forward.size();
        y=y-forward.size();
        cout<<xor_(backward,x-1,y-1)<<endl;
      }
      else{
      Z  cout<< ((xor_(forward,0,forward.size()-x)) ^ (xor_(backward,0,y-1-forward.size())) )<<endl;
      }
    }
  }
}
