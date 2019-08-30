/**
 * @Author: shadabKhan
 * @Date:   Friday, August 30th 2019, 3:05:56 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Friday, August 30th 2019, 5:05:11 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>frequency(200001,0);
    for(int i=0;i<n;i++)
    {
      int temp;
      cin>>temp;
      frequency[temp]++;
    }
    int min_operations=INT_MAX;
    for(int i=1;i<200001;i++)
    {
      int curr_operation=0;
      if(frequency[i]>=k)
      {
        min_operations=0;
        break;
      }
      int temp=i;
      int prev_operation=0;
      int total_elements=0;
      while(temp&&total_elements<k)
      {
        prev_operation=curr_operation;
        curr_operation+=frequency[temp]+prev_operation;
        total_elements+=frequency[temp];
        temp=temp/2;
      }
      if(total_elements>=k)
      if(min_operations>prev_operation)min_operations=prev_operation;
    }
    cout<<min_operations<<endl;
}
