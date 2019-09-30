/**
 * @Author: shadabKhan
 * @Date:   Wednesday, September 25th 2019, 9:51:37 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Wednesday, September 25th 2019, 10:04:55 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str1,str2,str3;
  cin>>str1>>str2>>str3;
  if(str1==str2&&str3!=str1)
  {
    if((str1=="rock"&&str3=="paper") ||(str1=="paper"&&str3=="scissors")||(str1=="scissors"&&str3=="rock") )
    {
      cout<<"S";
    }
    else{
      cout<<"?";
    }
  }
  else if(str2==str3&&str2!=str1)
  {
    if((str2=="rock"&&str1=="paper") ||(str2=="paper"&&str1=="scissors")||(str2=="scissors"&&str1=="rock") )
    {
      cout<<"F";
    }
    else{
      cout<<"?";
    }
  }
  else if(str1==str3&&str1!=str2)
  {

      if((str1=="rock"&&str2=="paper") ||(str1=="paper"&&str2=="scissors")||(str1=="scissors"&&str2=="rock") )
      {
        cout<<"M";
      }
      else{
        cout<<"?";
      }
  }
  else{
    cout<<"?";
  }
}
