/**
 * @Author: shadabKhan
 * @Date:   Saturday, August 24th 2019, 2:09:07 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Saturday, August 24th 2019, 6:54:17 pm
 */
#include<bits/stdc++.h>
using namespace std;
int64_t imax=0;
int64_t execute(vector<string>&commands,int64_t i,int64_t x)
{
  if(i>imax)imax=i;
  cout<<"i: "<<i<<"  x: "<<x<<endl;
  if(i==commands.size())return x;
  int64_t temp=1;
  if(x>((temp<<32)-1))return INT_MAX;
  if(commands[i]=="end")return x;
  if(commands[i]=="add")return execute(commands,i+1,x+1);
  else{
    string num = commands[i].substr(4,commands[i].length()-3);
    int loop = stoi(num);
    cout<<"loop: "<<loop<<endl;
    for(int j=0;j<loop;j++)
    {
      x = execute(commands,i+1,x);
    }
  }
  return x;
}
int main()
{
  int l;
  cin>>l;
  string nul;
  getline(cin,nul);
  vector<string>commands(l);
  for(int i=0;i<l;i++)
  {
    getline(cin,commands[i]);
  }
  int64_t x=execute(commands,0,0);
  if(x==INT_MAX)
  {
    cout<<"OVERFLOW!!!"<<endl;
  }
  else{
    cout<<x<<endl;
  }
}
