/**
 * @Author: shadabKhan
 * @Date:   Sunday, September 15th 2019, 1:05:56 am
 * @Last modified by:   shadabKhan
 * @Last modified time: Sunday, September 15th 2019, 1:40:43 am
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ll t;
  cin >> t;
  while(t--){
    ll n, m;
    cin >> n >> m;
    if(m<(n-1))
    {
      cout << -1 << endl;
    }
    else
    {
      if(n==2)
      {
        ll ans=1;
        cout << ans+(m/2) << endl;
      }
      else
      {
        ll rem=m%n;
        ll cnt=m/n;
        if(rem==1 || rem==2)
        {
          ans = ans+cnt;
        }
        else
        {
          ans = ans+cnt+1;
        }
        cout << ans << endl;
      }

    }
  }
}
