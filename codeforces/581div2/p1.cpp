/**
 * @Author: shadabKhan
 * @Date:   Wednesday, August 21st 2019, 1:36:33 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Wednesday, August 21st 2019, 1:58:35 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  bitset<101>num1(s);
  bitset<101>num2(1);
  int count=0;
  for(int i=0;i<100;i++)
  {

    if(num2.to_string() < num1.to_string())
    {
      count++;
    }
    else{
      break;
    }

        num2 = num2<<2;
  }
  cout<<count<<endl;
}
