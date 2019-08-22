/**
 * @Author: shadabKhan
 * @Date:   Thursday, August 22nd 2019, 8:40:51 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Thursday, August 22nd 2019, 9:11:41 pm
 */
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
   int t;
   cin>>t;
   while(t--)
   {
     int64_t n,a,b;
     cin>>n>>a>>b;
     string str;
     cin>>str;
     int64_t pipeline_length=0,pillers_length=2;
     for(int i=0;i<str.length()-1;i++)
     {
       if((str[i]=='0'&&str[i+1]=='1')||(str[i]=='1'&&str[i+1]=='0'))
       {
         pipeline_length+=2;
       }
       else{
         pipeline_length++;
       }

       if(str[i]=='0'&&str[i+1]=='1'||str[i]=='1'&&str[i+1]=='0'||str[i]=='1'&&str[i+1]=='1')
       {
         pillers_length+=2;
       }
       else{
         pillers_length++;
       }
     }
     cout<<pipeline_length*a+pillers_length*b<<endl;
   }
 }
