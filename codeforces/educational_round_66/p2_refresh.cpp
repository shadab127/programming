/**
 * @Author: shadabKhan
 * @Date:   Saturday, August 24th 2019, 3:41:41 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Saturday, August 24th 2019, 8:05:53 pm
 */
#include<bits/stdc++.h>
using namespace  std;
#define maxi 4294967295
int64_t x=0;
int64_t execute(vector<string>&commands,int64_t i)
{
  int num = stoi(commands[i].substr(4));
  i++;
  int64_t prev_x=x;
  num--;
  while(commands[i]!="end")
  {
    if(commands[i]=="add")x++;
    else{
        i=execute(commands,i);
    }
    i++;
    if(x>maxi||i==maxi)return maxi;
  }
  int64_t diff= x-prev_x;
  while(num--)x+=diff;
  if(x>maxi||i==maxi)return maxi;
  return i;
}
int main()
{
  int l;
  cin>>l;
  vector<string>commands(l+2);
  commands[0]="for 1";
  for(int i=1;i<=l;i++)
  {
    getline(cin,commands[i]);
    if(commands[i].length()==0)getline(cin,commands[i]);
  }
  commands[l+1]="end";
  if(execute(commands,0)==maxi)
  {
    cout<<"OVERFLOW!!!"<<endl;
  }
  else{
    cout<<x<<endl;
  }
}
