/**
 * @Author: shadabKhan
 * @Date:   Sunday, August 18th 2019, 11:26:17 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Monday, August 19th 2019, 12:41:55 am
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<tuple<int,int,int>>arr;
    for(int i=0;i<n;i++)
    {
      int a=0,b=0,c;
      string str;cin>>str;
      for(int j=0;j<n/2;j++)
      {
        if(str[j]=='1')a++;
      }
      for(int j=n/2;j<n;j++)
      {
        if(str[j]=='1')b++;
      }
      c=a-b;
      arr.push_back(make_tuple(c,a,b));
    }
    int64_t p1=0,p2=0;
    for(int i=0;i<n;i++)
    {
      p1+=get<1>(arr[i]);
      p2+=get<2>(arr[i]);
    }
    if(p1==p2)
    {
      cout<<0<<endl;
    }
    else{
      int64_t mini = abs(p1-p2);
      for(int i=0;i<arr.size();i++)
      {
        if(mini > abs((p1-p2)-2*get<0>(arr[i])))
        {
          mini = abs((p1-p2)-2*get<0>(arr[i]));
        }
      }
      cout<<mini<<endl;
    }
  }
}
