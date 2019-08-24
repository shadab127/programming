/**
 * @Author: shadabKhan
 * @Date:   Saturday, August 24th 2019, 10:26:39 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Saturday, August 24th 2019, 10:34:14 pm
 */
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int t;
     cin>>t;
     int loop=1;
     while(loop<=t)
     {
         int n,r,c,sr,sc;
         cin>>n>>r>>c>>sr>>sc;
         string s;
         cin>>s;
         vector<vector<bool>>grid(r,vector<bool>(c,0));
         sr--;
         sc--;
         grid[sr][sc]=1;
         for(int i=0;i<n;i++)
         {
              cout<<sr<<" "<<sc<<endl;
             switch(s[i])
             {
                 case 'E':
                         while(grid[sr][sc])
                         {
                             sc++;
                         }
                         grid[sr][sc]=1;
                         break;
                 case 'W':
                         while(grid[sr][sc])
                         {
                             sc--;
                         }
                         grid[sr][sc]=1;
                         break;
                 case 'N':
                         while(grid[sr][sc])
                         {
                             sr--;
                         }
                         grid[sr][sc]=1;
                         break;
                 case 'S':
                         while(grid[sr][sc])
                         {
                             sr++;
                         }
                         grid[sr][sc]=1;
                         break;
             }
         }
         cout<<"Case #"<<loop<<": "<<sr+1<<" "<<sc+1<<endl;
         loop++;
     }
 }
