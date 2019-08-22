/**
 * @Author: shadabKhan
 * @Date:   Thursday, August 22nd 2019, 8:05:02 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Thursday, August 22nd 2019, 8:21:17 pm
 */
 #include<bits/stdc++.h>
 using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int b,p,f;
    cin>>b>>p>>f;
    int h,c;
    cin>>h>>c;
    if(h>c)
    {
      swap(h,c);
      swap(p,f);
    }
    int64_t ans=0;
    if(2*f <= b)
    {
      ans+=f*c;
      b-=2*f;
    }
    else{
      ans+=(b/2)*c;
      b=0;
    }
    if(b)
    {
      if(2*p<=b)
      {
        ans+=p*h;
      }
      else{
      ans+=(b/2)*h;
      }
    }
    cout<<ans<<endl;
  }
}
