/**
 * @Author: shadabKhan
 * @Date:   Sunday, August 18th 2019, 9:54:33 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Sunday, August 18th 2019, 11:10:24 pm
 */
#include<bits/stdc++.h>
using namespace std;
double getdistance(double x1,double y1,double x2,double y2)
{
  return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}
double getslope(double x1,double y1,double x2,double y2)
{
  return (y2-y1)/(x2-x1);
}
double fun(double x1,double y1,double x2,double y2)
{
  return sqrt(1/(1+pow(getslope(x1,y1,x2,y2),2)));
}
int main()
{
  int t;cin>>t;
  while(t--)
  {
  double x1,y1,r1,x2,y2,r2;
  cin>>x1>>y1>>r1>>x2>>y2>>r2;
  double d1 = getdistance(x1,y1,x2,y2);
  if(x1==x2&&y1==y2)
  {
    if(r2>=r1)
    {
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
      cout<<fixed<<setprecision(10)<<x1<<" "<<y1-r1<<endl;
    }
  }
  else if(d1+r1<=r2)
  {
    cout<<"NO"<<endl;
  }
  else if(x1==x2)
  {
    cout<<"YES"<<endl;
    if(getdistance(x1,y1-r1,x2,y2)>getdistance(x1,y1+r1,x2,y2))
    {
      cout<<fixed<<setprecision(10)<<x1<<" "<<y1-r1<<endl;
    }
    else{
      cout<<fixed<<setprecision(10)<<x1<<" "<<y1+r1<<endl;
    }
  }
  else{
    double p1x,p1y,p2x,p2y;
    p1x = x1+r1*(fun(x1,y1,x2,y2));
    p1y = y1+getslope(x1,y1,x2,y2)*r1*(fun(x1,y1,x2,y2));
    p2x = x1-r1*(fun(x1,y1,x2,y2));
    p2y = y1-getslope(x1,y1,x2,y2)*r1*(fun(x1,y1,x2,y2));
    if(getdistance(p1x,p1y,x2,y2)>getdistance(p2x,p2y,x2,y2))
    {
      cout<<"YES"<<endl;
      cout<<fixed<<setprecision(10)<<p1x<<" "<<p1y<<endl;
    }
    else{
      cout<<"YES"<<endl;
      cout<<fixed<<setprecision(10)<<p2x<<" "<<p2y<<endl;
    }
  }
}
}
