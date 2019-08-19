/**
 * @Author: shadabKhan
 * @Date:   Monday, August 19th 2019, 9:38:53 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Monday, August 19th 2019, 9:53:52 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x;
  cin>>x;

  for(int i=0;i<=2;i++)
  {
    if((x+i)%4 == 1)
    {
      cout<<i<<" "<<"A"<<endl;
      return 0;
    }
  }
    for(int i=0;i<=2;i++)
    {
      if((x+i)%4 == 3)
      {
        cout<<i<<" "<<"B"<<endl;
        return 0;
      }
    }
      for(int i=0;i<=2;i++)
      {
        if((x+i)%4 == 2)
        {
          cout<<i<<" "<<"C"<<endl;
          return 0;
        }
      }
        for(int i=0;i<=2;i++)
        {
          if((x+i)%4 == 0)
          {
            cout<<i<<" "<<"D"<<endl;
            return 0;
          }
        }
}
