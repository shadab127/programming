/**
 * @Author: shadabKhan
 * @Date:   Sunday, August 25th 2019, 9:48:39 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Sunday, August 25th 2019, 10:06:59 pm
 */

 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
   int n;
   cin>>n;
   vector<vector<int>>arr(n,vector<int>(n));
   int temp=-16;
    for(int i=0;i<n;i=i+4)
    {
      for(int j=0;j<n;j=j+4)
      {
        if(n%4==0)
        {
          temp+=16;
        }
        arr[i][j]=8+temp;arr[i][j+1]=9+temp;arr[i][j+2]=1+temp;arr[i][j+3]=13+temp;
        arr[i+1][j]=3+temp;arr[i+1][j+1]=12+temp;arr[i+1][j+2]=7+temp;arr[i+1][j+3]=5+temp;
        arr[i+2][j]=0+temp;arr[i+2][j+1]=2+temp;arr[i+2][j+2]=4+temp;arr[i+2][j+3]=11+temp;
        arr[i+3][j]=6+temp;arr[i+3][j+1]=10+temp;arr[i+3][j+2]=15+temp;arr[i+3][j+3]=14+temp;
      }
    }

     for(int i=0;i<n;i++)
     {
       for(int j=0;j<n;j++)
       {
         cout<<arr[i][j]<<" ";
       }
       cout<<endl;
     }
 }
