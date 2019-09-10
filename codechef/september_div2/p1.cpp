#include<bits/stdc++.h>
using namespace std;

int power(int arr[][2],int n)
{
  int a,b,c,d;
  int m[2][2]={{1,1},{1,0}};
  while(n)
  {
    if(n%2!=0)
    {

          a=arr[0][0]*m[0][0]+arr[0][1]*m[1][0];
          b=arr[0][0]*m[0][1]+arr[0][1]*m[1][1];
          c=arr[1][0]*m[0][0]+arr[1][1]*m[1][0];
          d=arr[1][0]*m[0][1]+arr[1][1]*m[1][1];
          arr[0][0]=a%10;
          arr[0][1]=b%10;
          arr[1][0]=c%10;
          arr[1][1]=d%10;
          n--;
    }
    a=arr[0][0]*arr[0][0]+arr[0][1]*arr[1][0];
    b=arr[0][0]*arr[0][1]+arr[0][1]*arr[1][1];
    c=arr[1][0]*arr[0][0]+arr[1][1]*arr[1][0];
    d=arr[1][0]*arr[0][1]+arr[1][1]*arr[1][1];
    n=n/2;
    arr[0][0]=a%10;
    arr[0][1]=b%10;
    arr[1][0]=c%10;
    arr[1][1]=d%10;
  }
  return arr[0][0];
}
int fib(int n)
{
  if(n==0)return 0;
  int arr[2][2]={{1,1},{1,0}};
  return power(arr,n-1);
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int ans = fib(n/2);
    cout<<ans%10<<endl;
  }
}
