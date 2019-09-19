/**
 * @Author: shadabKhan
 * @Date:   Tuesday, September 17th 2019, 9:10:27 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Wednesday, September 18th 2019, 12:10:48 am
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin>>str;
  string hash;
  cin>>hash;
  int k;
  cin>>k;
  unordered_map<string,bool>myset;
  for(int i=0;i<str.size();i++)
  {
    //cout<<"kkp"<<endl;
    for(int j=i;j<str.size();j++)
    {
      vector<int>arr(26,0);
      string temp=str.substr(i,j-i+1);
      for(int l=0;l<temp.size();l++)
      {
        arr[temp[l]-'a']++;
      }
      bool flag=true;
        int tempo=0;
      for(int l=0;l<26;l++)
      {
        if(hash[l]=='0')
        {
          tempo+=arr[l];
        }
        if(tempo>k)
        {
          flag=false;
        }
      }
      if(flag)
      {
        if(myset.find(temp)==myset.end())
        myset.insert({temp,true});
      //  cout<<temp<<endl;
      }
    //  cout<<"hi  "<<temp<<endl;
    }

  //  cout<<"pp"<<endl;
  }
//  cout<<"hi"<<endl;
//for(auto x:myset)cout<<"gg  "<<x<<endl;
  cout<<myset.size()<<endl;
}
