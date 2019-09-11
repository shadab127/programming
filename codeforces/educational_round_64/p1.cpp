#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int ans=0;
  int prev,curr,next;
  cin>>prev;
  cin>>curr;

  if(curr==3&&prev==2||prev==3&&curr==2)
  {
    cout<<"Infinite"<<endl;
    return 0;
  }
  if(prev==1&&curr==2 || prev==2&&curr==1)
  {
    ans+=3;
  }
  if(prev==1&&curr==3 || prev==3&&curr==1)
  {
    ans+=4;
  }
  for(int i=2;i<n;i++)
  {
    cin>>next;
    if(next==3&&curr==2||curr==3&&next==2)
    {
      cout<<"Infinite"<<endl;
      return 0;
    }
    if(curr==1&&next==2 || curr==2&&next==1)
    {
      ans+=3;
    }
    if(curr==1&&next==3 || curr==3&&next==1)
    {
      ans+=4;
    }
    if(prev==3&&next==2)ans--;
    prev=curr;
    curr=next;
  }
  cout<<"Finite"<<endl;
  cout<<ans<<endl;
}
