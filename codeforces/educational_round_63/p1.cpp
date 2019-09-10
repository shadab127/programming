#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string str;
  cin>>str;
  for(int i=1;i<str.length();i++)
  {
    if(str[i-1]>str[i])
    {
      cout<<"YES"<<endl;
      cout<<i<<" "<<i+1<<endl;
      return 0;
    }
  }
  cout<<"NO"<<endl;
  return 0;
}
