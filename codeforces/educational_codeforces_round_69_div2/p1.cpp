/**
 * @Author: shadabKhan
 * @Date:   Thursday, August 22nd 2019, 2:45:22 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Thursday, August 22nd 2019, 3:00:10 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;cin>>n;
    int max1=INT_MIN,max2=INT_MIN;
    for(int i=0;i<n;i++)
    {
      int temp;
      cin>>temp;
      if(temp>max1)
      {
        max2=max1;
        max1=temp;
      }
      else if(temp>max2){
      max2=temp;
      }
    }
    cout<< min(max2-1,n-2)<<endl;
  }
}
