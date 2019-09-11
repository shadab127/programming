#include<bits/stdc++.h>
using namespace std;
bool check(string ans)
{
  for(int i=1;i<ans.length();i++)
  {
    if(abs(ans[i]-ans[i-1])==1)
    {
      return false;
    }
  }
  return true;
}
int main()
{
  int t;
  cin>>t;
  string str;
  while(t--)
  {
    cin>>str;
    vector<int>arr(26,0);
    for(int i=0;i<str.length();i++)
    {
      arr[str[i]-'a']++;
    }
    string str1="";
    for(int i=0;i<26;i=i+2)
    {
      while(arr[i]--)
      {
        str1+=('a'+i);
      }
    }
    string str2="";
    for(int i=1;i<26;i=i+2)
    {
      while(arr[i]--)
      {
        str2+=('a'+i);
      }
    }
    if(check(str1+str2))
    {
      cout<<str1+str2<<endl;
      continue;
    }
    if(check(str2+str1))
    {
      cout<<str2+str1<<endl;
      continue;
    }
    reverse(str2.begin(),str2.end());
    if(check(str1+str2))
    {
      cout<<str1+str2<<endl;
      continue;
    }
    if(check(str2+str1))
    {
      cout<<str2+str1<<endl;
      continue;
    }
    reverse(str1.begin(),str1.end());
    if(check(str1+str2))
    {
      cout<<str1+str2<<endl;
      continue;
    }
    else if(check(str2+str1))
    {
      cout<<str2+str1<<endl;
      continue;
    }
    reverse(str2.begin(),str2.end());
    if(check(str1+str2))
    {
      cout<<str1+str2<<endl;
      continue;
    }
    if(check(str2+str1))
    {
      cout<<str2+str1<<endl;
      continue;
    }
    cout<<"No answer"<<endl;

  }
}
