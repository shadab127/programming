/**
 * @Author: shadabKhan
 * @Date:   Sunday, September 29th 2019, 6:31:53 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Sunday, September 29th 2019, 7:48:39 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   vector<vector<int> >graph(n);
   for(int i=0;i<m;i++)
   {
     int x,y;
     cin>>x>>y;
     graph[x-1].push_back(y-1);
     graph[y-1].push_back(x-1);
   }
   vector<int>nodes(n,-1);
   for(int i=0;i<n;i++)
   {
     if(nodes[i]==-1)
     {
       nodes[i]=1;
       for(int j=0;j<graph[i].size();j++)
       {
         if(nodes[graph[i][j]]==-1 && nodes[graph[i][j]]!=1)
         {
           nodes[graph[i][j]]=2;
         }
       }
     }
   }
   for(int i=0;i<n;i++)
   {
     if(nodes[i]==2)
     {
       for(int j=0;j<graph[i].size();j++)
       {
         if(nodes[graph[i][j]]==2)
         {
           nodes[graph[i][j]]=3;
         }
       }
     }
   }
   bool flag=false;
   for(int i=0;i<n;i++)
   {
     if(nodes[i]==3)
     {
       for(int j=0;j<graph[i].size();j++)
       {
         if(nodes[graph[i][j]]==3)
         {
           flag=true;
         }
       }
     }
   }
   for(int i=0;i<n;i++)
   {
     if(nodes[i]==-1)flag=true;
   }
   if(flag)
   {
     cout<<-1<<endl;
   }
   else{
     for(int i=0;i<n;i++)cout<<nodes[i]<<" ";
   }
}
