/**
 * @Author: shadabKhan
 * @Date:   Wednesday, August 21st 2019, 2:50:50 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Wednesday, August 21st 2019, 4:40:12 pm
 */
#include<bits/stdc++.h>
using namespace std;
int lis( vector<int> &arr)
{
  int n= arr.size();
    int lis[n];

    lis[0] = 1;

    /* Compute optimized LIS values in bottom up manner */
    for (int i = 1; i < n; i++ )
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++ )
            if ( arr[i] >= arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }

    // Return maximum value in lis[]
    return *max_element(lis, lis+n);
}
int main()
{
  string str;
  cin>>str;
  vector<int>arr1(str.length(),0);
  vector<int>arr2(str.length(),0);
  for(int i=0;i<str.length();i++)
  {
    if(str[i]=='1')
    {
      arr1[i]=1;
      arr2[i]=1;
    }
  }
  for(int i=0;i<arr1.size();i++)
  {
    if(arr1[i]==1)
    {
      arr2[i]=0;
      vector<int>temp1;
      vector<int>temp2;
      for(int j=0;j<=i;j++)
      {
        for(int k=j;k<arr1.size();k++)
        {
          //cout<<"k"<<k<<" j"<<j<<" "<<endl;
          for(int l=j;l<=k;l++)
          {
            temp1.push_back(arr1[l]);
            temp2.push_back(arr2[l]);
          }
          // for(int p=0;p<temp1.size();p++)cout<<temp1[p];
          // cout<<endl;
          // for(int p=0;p<temp2.size();p++)cout<<temp2[p];
          // cout<<endl;
          //cout<<lis(temp1)<<" "<<lis(temp2)<<endl;
          if(lis(temp1)!= lis(temp2))
          {
            arr2[i]=1;
            goto l1;
          }
          temp1.clear();
          temp2.clear();
        }
      }
    }
    l1:
    continue;
  }
  for(int i=0;i<arr2.size();i++)cout<<arr2[i];
}
