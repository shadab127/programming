/**
 * @Author: shadabKhan
 * @Date:   Wednesday, September 18th 2019, 10:48:02 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Saturday, September 21st 2019, 2:05:19 am
 */



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int64_t>arr1(n),arr2(n),arr3(n);
    for(int i=0;i<n;i++)cin>>arr1[i];
    for(int i=0;i<n;i++)cin>>arr2[i];
    for(int i=1;i<=n;i++)arr3[i-1]=i*(n-i+1);

    for(int i=0;i<n;i++)arr1[i]=arr1[i]*arr3[i];

    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    reverse(arr2.begin(),arr2.end());
    int64_t sum=0;
    for(int i=0;i<n;i++)sum=(sum+(arr1[i]*arr2[i])%998244353)%998244353;
    cout<<sum;
}
