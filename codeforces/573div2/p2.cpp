/**
 * @Author: shadabKhan
 * @Date:   Monday, August 19th 2019, 9:54:34 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Monday, August 19th 2019, 10:39:02 pm
 */
#include<bits/stdc++.h>
using namespace std;
bool check_koutsu(vector<string>&arr)
{
  for(int i=0;i<arr.size()-2;i++)
  {
    int count =1;
    for(int j=i+1;j<arr.size();j++)
    {
      if(arr[i]==arr[j])count++;
    }
    if(count>=3)return true;
  }
  return false;
}
bool check_shuntsu(vector<string>&arr)
{
  map<string,bool>mp;
  for(int i=0;i<arr.size();i++)
  {
    mp[arr[i]]=true;
  }
  for(int i=0;i<arr.size();i++)
  {
    string str1 ="",str2="";
    str1+=(arr[i][0]-1);
    str1+=(arr[i][1]);
    str2+=(arr[i][0]+1);
    str2+=(arr[i][1]);
    if(mp.find(str1)!=mp.end()&&mp.find(str2)!=mp.end())
    {
      return true;
    }
  }
  return false;
}
int main()
{
  vector<string>arr(3);
  cin>>arr[0]>>arr[1]>>arr[2];
  if(check_koutsu(arr)||check_shuntsu(arr))
  {
    cout<<"0"<<endl;
    return 0;
  }
  string temp1="mps",temp2="123456789";
  for(int i=0;i<temp1.size();i++)
  {
    for(int j=0;j<temp2.size();j++)
    {
      string temp3="";
      temp3+=temp2[j];
      temp3+=temp1[i];
      arr.push_back(temp3);
      if(check_koutsu(arr)||check_shuntsu(arr))
      {
        cout<<"1"<<endl;
        return 0;
      }
      arr.pop_back();
    }
  }
  cout<<"2"<<endl;
  return 0;
}
