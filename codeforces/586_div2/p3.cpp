/**
 * @Author: shadabKhan
 * @Date:   Wednesday, September 18th 2019, 10:13:33 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Wednesday, September 18th 2019, 10:46:48 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin>>str;
  cout<<"Mike"<<endl;
  char min_char=str[0];
  for(int i=1;i<str.length();i++)
  {
    if(min_char<str[i])
    {
      cout<<"Ann"<<endl;
    }
    else{
      cout<<"Mike"<<endl;
      min_char=str[i];
    }
  }
}
