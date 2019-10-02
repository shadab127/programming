/**
 * @Author: shadabKhan
 * @Date:   Tuesday, October 1st 2019, 7:56:33 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Tuesday, October 1st 2019, 8:27:02 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  unordered_map<int,int> mymap(k);
  deque<int> myqueue;
  for(int i=0;i<n;i++)
  {
    int temp;
    cin>>temp;
    if(mymap.find(temp) == mymap.end())
    {
      if(myqueue.size()==k)
      {
        int x = myqueue.back();
        myqueue.pop_back();
        myqueue.push_front(temp);
        mymap.erase(x);
        mymap.insert({temp,1});
      }
      else{
        myqueue.push_front(temp);
        mymap.insert({temp,1});
      }
    }
  }
  cout<<myqueue.size()<<endl;
  while(!myqueue.empty())
  {
    cout<<myqueue.front()<<" ";
    myqueue.pop_front();
  }
}
