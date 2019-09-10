/**
 * @Author: shadabKhan
 * @Date:   Tuesday, September 10th 2019, 11:07:41 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Tuesday, September 10th 2019, 11:50:32 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int b,g,n;
  cin>>b>>g>>n;
  if(b+g==n)cout<<1<<endl;
  else
  {
    if(max(b,g)<n)
    {
      cout<<min(min(b,g),n)+1-(n-max(b,g))<<endl;
    }
    else{
      cout<<min(min(b,g),n)+1<<endl;
    }
  }
}
