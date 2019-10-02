/**
 * @Author: shadabKhan
 * @Date:   Tuesday, October 1st 2019, 7:56:33 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Tuesday, October 1st 2019, 8:11:17 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int q;
  cin>>q;
  while(q--)
  {

    int n;
    cin>>n;
    double sum=0;
    for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
      sum +=x;
    }
    cout<<(int64_t)ceil(sum/n)<<endl;
  }
}
