/**
 * @Author: shadabKhan
 * @Date:   Sunday, September 8th 2019, 11:03:46 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Sunday, September 8th 2019, 11:51:59 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,a,b,c;
  cin>>t;
  while(t--)
  {
      cin>>a>>b>>c;
      int temp = a-b+c;
      if(temp<0)
      {
        cout<<0<<endl;
      }
      else if(temp%2==0)
      {
          cout<<min(c+1,temp/2)<<endl;
      }
      else{
          cout<<min(c+1,temp/2 +1)<<endl;
        }
    }
}
