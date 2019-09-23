/**
 * @Author: shadabKhan
 * @Date:   Sunday, September 22nd 2019, 9:21:43 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Sunday, September 22nd 2019, 9:43:51 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  vector<int>arr={6,2,5,5,4,5,6,3,7,6};
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    int64_t sum=a+b;
    string str = to_string(sum);
    int ans=0;
    for(int i=0;i<str.length();i++)
    {
      ans+=arr[(str[i]-'0')];
    }
    cout<<ans<<endl;
  }
}
