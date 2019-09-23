/**
 * @Author: shadabKhan
 * @Date:   Saturday, September 21st 2019, 1:14:36 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Saturday, September 21st 2019, 11:20:48 pm
 */
#include<bits/stdc++.h>
using namespace std;
struct point2d
{
  int x,y;
};
int main()
{
  point2d points[6];
  for(int i=0;i<6;i++)
  {
    cin>>points[i].x >>points[i].y;
  }
  if(points[2].x <=points[0].x && points[2].y<=points[0].y && points[3].x>=points[1].x && points[3].y>=points[1].y)
  {
    cout<<"NO"<<endl;
  }
  else if(points[4].x <=points[0].x && points[4].y<=points[0].y && points[5].x>=points[1].x && points[5].y>=points[1].y)
  {
    cout<<"NO"<<endl;
  }
  else if(points[4].x <=points[0].x && points[4].y<=points[0].y && points[5].x>=points[1].x && (points[5].y<points[1].y))
  {
    if(points[2].x <=points[0].x && points[2].y<=points[5].y && points[3].x>=points[1].x && points[3].y>=points[1].y)
    {
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }
  else if(points[2].x <=points[0].x && points[2].y<=points[0].y && points[3].x>=points[1].x && points[3].y<points[1].y)
  {
    if(points[4].x <=points[0].x && points[4].y<=points[3].y && points[5].x>=points[1].x && points[5].y>=points[1].y)
    {
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }
  else if(points[2].x <=points[0].x && points[2].y<=points[0].y && points[3].x<points[1].x && points[3].y>=points[1].y)
  {
    if(points[4].x <= points[3].x && points[4].y<=points[0].y && points[5].x>=points[1].x && points[5].y>=points[1].y)
    {
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }
  else if(points[4].x <= points[0].x && points[4].y<=points[0].y && points[5].x<points[1].x && points[5].y>=points[1].y)
  {
    if(points[2].x <=points[5].x && points[2].y<=points[0].y && points[3].x>=points[1].x && points[3].y>=points[1].y)
    {
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }
  else{
    cout<<"YES"<<endl;
  }



}
