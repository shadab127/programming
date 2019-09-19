/**
 * @Author: shadabKhan
 * @Date:   Wednesday, September 11th 2019, 2:04:10 am
 * @Last modified by:   shadabKhan
 * @Last modified time: Wednesday, September 11th 2019, 2:25:02 am
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  vector<string>arr(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int ans =2;
  for(int i=1;i<m;i++)
  {
    int count=0;
    int row=0,col=i;
    while(row<n&&col>=0)
    {
    //  cout<<row<<" "<<col<<endl;
      if(arr[row][col]=='.')count++;
      row++;
      col--;
    }
    if(count<ans)ans=count;
  }
  for(int i=1;i<n-1;i++)
  {
    int count=0;
    int col=m-1,row=i;
    while(row<n&&col>=0)
    {
    //  cout<<row<<" "<<col<<endl;
      if(arr[row][col]=='.')count++;
      row++;
      col--;
    }
    if(count<ans)ans=count;
  }
  cout<<ans<<endl;
}
