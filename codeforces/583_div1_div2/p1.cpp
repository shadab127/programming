/**
 * @Author: shadabKhan
 * @Date:   Tuesday, September 10th 2019, 2:21:44 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Tuesday, September 10th 2019, 11:08:10 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int64_t n,d,e;
  cin>>n>>d>>e;
  int ans=INT_MAX;
  for(int i=0;n-i*e>=0;i=i+5)
  {
    int temp=(n-i*e)%d;
    if(ans>temp)ans=temp;
  }
  cout<<ans<<endl;
}
