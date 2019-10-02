/**
 * @Author: shadabKhan
 * @Date:   Tuesday, October 1st 2019, 8:35:29 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Wednesday, October 2nd 2019, 5:35:16 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin>>str;
  int q;
  cin>>q;
  vector<set<int> > arr(26);
  for(int i=0;i<str.length();i++)
  {
    arr[str[i]-'a'].insert(i);
  }
  while(q--)
  {
    int choice;
    cin>>choice;
    if(choice==1)
    {
      int index;
      char c;
      cin>>index>>c;
      char temp = str[index-1];
      arr[temp-'a'].erase(index-1);
      arr[c-'a'].insert(index-1);
      str[index-1]=c;
    }
    else{
      int l,r;
      cin>>l>>r;
      int count=0;
      for(int i=0;i<26;i++)
      {
        auto it = arr[i].lower_bound(l-1);
        if(it!=arr[i].end()&&*it<=r-1)count++;
      }
      cout<<count<<endl;
    }
  }
}
