/**
 * @Author: shadabKhan
 * @Date:   Friday, August 23rd 2019, 9:42:18 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Friday, August 23rd 2019, 10:26:43 pm
 */
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>v1,vector<int>v2)
{
  for(int i=0;i<v1.size();i++)
  {
    //cout<<v1[i]<<" "<<v2[i]<<endl;
    if(v1[i]<v2[i])return 0;
  }
  return 1;
}
int find(vector<vector<int>>&process_s,vector<int>&process_f)
{
  int low=0,high=process_s.size()-1;
  //cout<<high<<endl;
  int mid=0;
  while(low<=high)
  {
    mid=(low+high)>>1;
  //  cout<<"jcc  "<<mid<<endl;
    if(check(process_s[mid],process_f)==0)
    {
      low=mid+1;
    }
    else{
      high=mid-1;
    }
  }

  return low;
}
int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  vector<vector<int>>process_s;
  vector<int>temp(26,0);
  for(int i=0;i<n;i++)
  {
    temp[s[i]-'a']++;
    process_s.push_back(temp);
  }
  int m;
  cin>>m;
  while(m--)
  {
    string f;
    cin>>f;
    vector<int>process_f(26,0);
    for(int i=0;i<f.length();i++)
    {
      process_f[f[i]-'a']++;
    }
    cout<<find(process_s,process_f)+1<<endl;
  }
}
