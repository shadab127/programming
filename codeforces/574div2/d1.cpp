/**
 * @Author: shadabKhan
 * @Date:   Saturday, August 17th 2019, 7:20:00 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Saturday, August 17th 2019, 7:48:36 pm
 */
#include<bits/stdc++.h>
using namespace std;
uint64_t addzero1(string s)
{
  string newstr="";
  for(int i=0;i<s.length();i++)
  {
    newstr+=s[i];
    newstr+='0';
  }
  return stoull(newstr);
}
uint64_t addzero2(string s)
{
  string newstr="";
  for(int i=0;i<s.length();i++)
  {
    newstr+='0';
    newstr+=s[i];
  }
  return stoull(newstr);
}

int main()
{

  uint64_t mod=998244353;
  int n;
  cin>>n;
  vector<string>strs;
  for(int i=0;i<n;i++)
  {
    string temp;
    cin>>temp;
    strs.push_back(temp);
  }
  vector<uint64_t>arr1;
  vector<uint64_t>arr2;
  for(int i=0;i<n;i++)
  {
    arr1.push_back(addzero1(strs[i])%mod);
    arr2.push_back(addzero2(strs[i])%mod);
  }
  uint64_t ans=0;
  for(int i=0;i<n;i++)
  {
    ans = (ans+(arr1[i]*n)%mod)%mod;
    ans = (ans+(arr2[i]*n)%mod)%mod;
  }
  cout<<ans<<endl;
}
