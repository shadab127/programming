/**
 * @Author: shadabKhan
 * @Date:   Sunday, August 18th 2019, 7:22:07 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Sunday, August 18th 2019, 7:25:40 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int max1=INT_MIN;
  while(n--)
  {
    int temp;cin>>temp;
    if(temp>max1)max1=temp;
  }
  cin>>n;
  int max2=INT_MIN;
  while(n--)
  {
    int temp;cin>>temp;
    if(temp>max2)max2=temp;
  }
  cout<<max1<<" "<<max2<<endl;
}
