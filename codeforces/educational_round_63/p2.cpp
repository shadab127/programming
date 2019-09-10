#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string str;
  cin>>str;
  int count=0;
  for(int i=0;i<=n-11;i++)
  {
    if(str[i]=='8')count++;
  }
  if(count>(n-11)/2)
  {
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
}
