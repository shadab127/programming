/**
 * @Author: shadabKhan
 * @Date:   Monday, September 9th 2019, 12:38:13 am
 * @Last modified by:   shadabKhan
 * @Last modified time: Monday, September 9th 2019, 1:04:31 am
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,x;
    cin>>n>>x;
    int maxi=0;
    int max_diff=0;
    for(int i=0;i<n;i++)
    {
      int d,h;
      cin>>d>>h;
      if(maxi<d)maxi=d;
      if(max_diff<d-h)max_diff=d-h;
    }

      x=x-maxi;
      if(x<=0)cout<<1<<endl;
    else if(max_diff<=0)
    {
      cout<<-1<<endl;
    }
    else{
    int ans= ceil((double)x/(double)max_diff)+1.1;
    cout<<ans<<endl;
  }
  }
}
