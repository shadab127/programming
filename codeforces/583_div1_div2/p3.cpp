/**
 * @Author: shadabKhan
 * @Date:   Tuesday, September 10th 2019, 11:58:19 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Wednesday, September 11th 2019, 12:16:05 am
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  stack<char>my_stack;
  string str;
  cin>>str;
  for(int i=0;i<n;i++)
  {
    char temp;
    temp=str[i];
    if(my_stack.empty())
    {
      my_stack.push(temp);
    }
    else{
      if(my_stack.top()=='('&&temp==')')my_stack.pop();
      else{
        my_stack.push(temp);
      }
    }
  }
  if(my_stack.size()==0)cout<<"Yes"<<endl;
  else if(my_stack.size()==2)
  {
    if(my_stack.top()=='(')
    {
      my_stack.pop();
      if(my_stack.top()==')')
      {
        cout<<"Yes"<<endl;
      }
      else
      cout<<"No"<<endl;
    }
    else
    cout<<"No"<<endl;
  }
  else
  cout<<"No"<<endl;
  return 0;
}
