/**
 * @Author: shadabKhan
 * @Date:   Saturday, August 24th 2019, 1:52:21 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Saturday, August 24th 2019, 2:08:26 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int64_t n,k;
    cin>>n>>k;
    int64_t ans=0;
    while(n!=0)
    {
      //cout<<n<<endl;
      if(n%k==0)
      {
        n=n/k;
        ans++;
      }
      else{
        ans+=n%k;
        n=(n-(n%k));
      }
    }
    cout<<ans<<endl;
  }
}
