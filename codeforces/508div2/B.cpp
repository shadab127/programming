/**
 * @Author: shadabKhan
 * @Date:   Saturday, August 17th 2019, 10:57:41 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Saturday, August 17th 2019, 11:11:09 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  if(n==1)
  {
    cout<<"No"<<endl;
    return 0;
  }
  vector<int>arr1;
  vector<int>arr2;

  if(((n*n)/4)%2==0)
  {
    cout<<"Yes"<<endl;
    for(int i=2;i<=n;i=i+2)
    {
      arr1.push_back(i);
    }
    for(int i=1;i<=n;i=i+2)
    {
      arr2.push_back(i);
    }
    cout<<arr1.size()<<" ";
    for(int i=0;i<arr1.size();i++)cout<<arr1[i]<<" ";
    cout<<endl<<arr2.size()<<" ";
    for(int i=0;i<arr2.size();i++)cout<<arr2[i]<<" ";
  }
  else{
    cout<<"No"<<endl;
  }
}
