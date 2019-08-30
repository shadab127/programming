/**
 * @Author: shadabKhan
 * @Date:   Tuesday, August 27th 2019, 1:56:58 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Tuesday, August 27th 2019, 3:05:56 pm
 */
 #include<bits/stdc++.h>
 using namespace std;
int SumPrimeIndices(int* arr,int n)
{
  if(n==0)return -1;
  if(n<2)return 0;
  int64_t ans=0;
  for(int i=2;i<n;i++)
  {
    bool flag=1;
    for (int j = 2; j*j<=i; j++) {
        if (i % j == 0) {
            flag = 0;
            break;
        }
    }
    if(flag)
    {
      ans+=arr[i];
    }
  }
  return ans;
}
int main()
{
  int arr[10]={10,-12,2,5,3,15,17,21,-3,-4};
  cout<<SumPrimeIndices(arr,10);
}
