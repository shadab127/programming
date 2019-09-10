#include<bits/stdc++.h>
using namespace std;
int main()
{
    int64_t n,x;
    cin>>n>>x;
    vector<int64_t>arr1(n);
    vector<int64_t>arr2(n);
    for(int i=0;i<n;i++)
    {
      cin>>arr1[i];
      arr2[i]=arr1[i]*x;
  //   cout<<arr1[i]<<" "<<arr2[i]<<endl;
    }
    int64_t maxsum1=0,maxsum2=0,maxsum3=0;
    int64_t temp=0;
    for(int i=0;i<n;i++)
    {
      temp=arr1[i]+temp;
      if(temp<0)
      {
        temp=0;
      }
      if(temp > arr1[i])
      {
        arr1[i]=temp;
      }
      if(temp>maxsum1)maxsum1=temp;
    }
    temp=0;
    for(int i=n-1;i>=0;i--)
    {
     temp=arr2[i]+temp;
      if(temp<0)
      {
        temp=0;
      }
      if(temp > arr2[i])
      {
        arr2[i]=temp;
      }
      if(temp>maxsum2)maxsum2=temp;
    }
    for(int i=0;i<n-1;i++)
    {
      if(arr1[i]+arr2[i+1]>maxsum3)maxsum3=arr1[i]+arr2[i+1];
    }
    cout<<maxsum1<<" "<<maxsum2<<" "<<maxsum3<<endl;
    cout<<max(maxsum1,max(maxsum2,maxsum3))<<endl;
}
