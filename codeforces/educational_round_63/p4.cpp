#include<bits/stdc++.h>
using namespace std;
int main()
{
    int64_t n,x;
    cin>>n>>x;
    vector<int64_t>arr1(n);
    vector<int64_t>arr2(n);

    vector<int64_t>arr3(n);
    vector<int64_t>arr4(n);
    for(int i=0;i<n;i++)
    {
      cin>>arr1[i];
      arr2[i]=arr1[i]*x;
  //   cout<<arr1[i]<<" "<<arr2[i]<<endl;
    }
    arr3=arr1;
    arr4=arr2;
    int64_t maxsum=0;
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
      if(temp>maxsum)maxsum=temp;
    }
    temp=0;
    for(int i=n-1;i>=0;i--)
    {
     temp=arr3[i]+temp;
      if(temp<0)
      {
        temp=0;
      }
      if(temp > arr3[i])
      {
        arr3[i]=temp;
      }
      if(temp>maxsum)maxsum=temp;
    }

    temp=0;
    for(int i=0;i<n;i++)
    {
      temp=arr4[i]+temp;
      if(temp<0)
      {
        temp=0;
      }
      if(temp > arr4[i])
      {
        arr4[i]=temp;
      }
      if(temp>maxsum)maxsum=temp;
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
      if(temp>maxsum)maxsum=temp;
    }


    for(int i=0;i<n-1;i++)
    {
      if(arr1[i]+arr2[i+1]>maxsum)maxsum=arr1[i]+arr2[i+1];
    }

    for(int i=0;i<n-1;i++)
    {
      if(arr4[i]+arr3[i+1]>maxsum)maxsum=arr4[i]+arr3[i+1];
    }
    cout<<maxsum<<endl;
}
