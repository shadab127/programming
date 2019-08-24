/**
 * @Author: shadabKhan
 * @Date:   Friday, August 23rd 2019, 9:27:17 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Friday, August 23rd 2019, 9:41:38 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int q;
  cin>>q;
  while(q--)
  {
    int n,s,t;
    cin>>n>>s>>t;
    int mini=min(s,t);
    cout<<n-mini+1<<endl;
  }
}
