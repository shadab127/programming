/**
 * @Author: shadabKhan
 * @Date:   Saturday, August 17th 2019, 10:38:41 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Saturday, August 17th 2019, 10:56:17 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  vector<int>arr(k,0);
  for(int i=0;i<n;i++)
  {
    char temp;
    cin>>temp;
    arr[temp-'A']++;
  }
  int min= *min_element(arr.begin(),arr.end());
  cout<<min*k<<endl;
}
