/**
 * @Author: shadabKhan
 * @Date:   Sunday, September 29th 2019, 6:31:14 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Sunday, September 29th 2019, 6:45:46 pm
 */
#include<bits/stdc++.h>
using namespace std;
int check(int num)
{
  string str = to_string(num);
  vector<bool>arr(10,0);
  for(int i=0;i<str.length();i++)
  {
    if(!arr[str[i]-'0'])arr[str[i]-'0']=1;
    else
    return 0;
  }
  return 1;
}
int main()
{
  int l,r;
  cin>>l>>r;
  if(r<l)
  {
    cout<<-1;
    return 0;
  }
  else{
    for(int i=l;i<=r;i++)
    {
      if(check(i))
      {
        cout<<i<<endl;
        return 0;
      }
    }
  }
  cout<<-1<<endl;
}
