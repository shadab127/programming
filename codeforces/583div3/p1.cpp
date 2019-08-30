/**
 * @Author: shadabKhan
 * @Date:   Friday, August 30th 2019, 2:37:33 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Friday, August 30th 2019, 2:54:41 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int even=0;
  int odd=0;
  for(int i=0;i<n;i++)
  {
    int temp;
    cin>>temp;
    if(temp%2)
    {
      odd++;
    }
    else{
      even++;
    }
  }
  cout<<min(even,odd)<<endl;

}
