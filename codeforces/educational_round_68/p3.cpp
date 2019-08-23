/**
 * @Author: shadabKhan
 * @Date:   Friday, August 23rd 2019, 4:23:02 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Friday, August 23rd 2019, 8:24:17 pm
 */
#include<bits/stdc++.h>
using namespace std;
int find(char c,string str,int j)
{
  for(int i=j;i<str.length();i++)
  {
    if(str[i]==c)
    {
      return i;
    }
  }
  return INT_MIN;
}
bool check(string s,string t)
{
  int i=0,j=0;
  while(i<s.length())
  {
    j = find(s[i],t,j);
    if(j==INT_MIN)return false;
    j++;
    i++;
  }
  return true;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s,t,p;
    cin>>s>>t>>p;
    if(check(s,t))
    {
      vector<int>arr1(26,0);
      vector<int>arr2(26,0);
      for(int i=0;i<s.length();i++)
      {
        arr1[s[i]-'a']++;
      }
      for(int i=0;i<p.length();i++)
      {
        arr1[p[i]-'a']++;
      }
      for(int i=0;i<t.length();i++)
      {
        arr2[t[i]-'a']++;
      }
      bool flag=false;
      for(int i=0;i<26;i++)
      {
        if(arr2[i]!=0&&arr2[i]>arr1[i])flag=true;
      }
      if(flag)
      {
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
    }
    else{
      cout<<"NO"<<endl;
    }
  }
}
