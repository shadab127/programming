/**
 * @Author: shadabKhan
 * @Date:   Wednesday, September 18th 2019, 9:38:41 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Wednesday, September 18th 2019, 9:52:22 pm
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int>arr(26,0);
  for(int i=0;i<n;i++)
  {
    char c;cin>>c;
    arr[c-'a']++;
  }
  int ones = arr['n'-'a'];
  int zeroes = arr['z'-'a'];

  bool flag=true;
  if(ones)flag=false;

  while(ones--)
  {
    cout<<"1 ";
  }
  while(zeroes--)
  {
    cout<<"0 ";
  }

}
