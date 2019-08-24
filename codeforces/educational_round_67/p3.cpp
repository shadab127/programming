/**
 * @Author: shadabKhan
 * @Date:   Friday, August 23rd 2019, 10:28:31 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Saturday, August 24th 2019, 11:27:49 am
 */
#include<bits/stdc++.h>
using namespace std;

// An Interval
struct Interval
{
    int s, e;
};

// Function used in sort
bool mycomp(Interval a, Interval b)
{   return a.s > b.s; }

int mergeIntervals(vector<Interval>&arr, int n)
{
    // Sort Intervals in decreasing order of
    // start time
    sort(arr.begin(), arr.end(), mycomp);

    int index = 0; // Stores index of last element
    // in output array (modified arr[])

    // Traverse all input Intervals
    for (int i=0; i<n; i++)
    {
        // If this is not first Interval and overlaps
        // with the previous one
        if (index != 0 && arr[index-1].s <= arr[i].e)
        {
            while (index != 0 && arr[index-1].s <= arr[i].e)
            {
                // Merge previous and current Intervals
                arr[index-1].e = max(arr[index-1].e, arr[i].e);
                arr[index-1].s = min(arr[index-1].s, arr[i].s);
                index--;
            }
        }
        else // Doesn't overlap with previous, add to
            // solution
            arr[index] = arr[i];

        index++;
    }

    // Now arr[0..index-1] stores the merged Intervals
    reverse(arr.begin(),arr.begin()+index);
    //
    // cout << "\n The Merged Intervals are: ";
    // for (int i = 0; i < index; i++)
    //     cout << "[" << arr[i].s << ", " << arr[i].e << "] ";
    return index;
}
bool check(vector<Interval>increasing,vector<Interval>decreasing,int index1,int index2)
{
  if(increasing.size()==0)return true;
  for(int i=0;i<index2;i++)
  {
    for(int j=0;j<index1;j++)
    {
      if(increasing[j].s<=decreasing[i].s&&increasing[j].e>=decreasing[i].e)
      {
        return true;
      }
    }
  }
  return false;
}
int main()
{
  // Interval arr[] =  { {6,8}, {1,9}, {2,4}, {4,7} };
  //  int n = sizeof(arr)/sizeof(arr[0]);
  //  mergeIntervals(arr, n);

   int n,m;
   cin>>n>>m;
   vector<Interval>increasing;
   vector<Interval>decreasing;
   for(int i=0;i<m;i++)
   {
     int flag;
     cin>>flag;
     Interval temp;
     cin>>temp.s>>temp.e;
     if(flag)
     {
       increasing.push_back(temp);
     }
     else{
       decreasing.push_back(temp);
     }
   }
   int index1=mergeIntervals(increasing,increasing.size());
   if(check(increasing,decreasing,index1,decreasing.size()))
   {
     if(increasing.size()==0)
     {
       cout<<"YES"<<endl;
       for(int i=n;i>0;i--)
       {
         cout<<i<<" ";
       }
     }
     else
     cout<<"NO"<<endl;
   }
   else{
     vector<int>ans;
     for(int i=1;i<=n;i++)
     {
       ans.push_back(i);
     }
     int tempo=0;
     for(int j=0;j<=(0 + increasing[0].s-1)/2;j++)
     {
       //cout<<j<<endl;
       swap(ans[j],ans[increasing[0].s-1-tempo]);
       tempo++;
     }
     for(int i=0;i<index1-1;i++)
     {
      // cout<<increasing[i].e-1<<" ll  "<<increasing[i+1].s-1<<endl;
        tempo=0;
       for(int j=increasing[i].e-1;j<=(increasing[i].e-1 + increasing[i+1].s-1)/2;j++)
       {
         //cout<<j<<endl;
         swap(ans[j],ans[increasing[i+1].s-1-tempo]);
         tempo++;
       }
     }

     tempo=0;
     for(int j=increasing[index1-1].e-1;j<=(increasing[index1-1].e-1+n-1)/2;j++)
     {
       //cout<<j<<endl;
       swap(ans[j],ans[n-1-tempo]);
       tempo++;
     }
     cout<<"YES"<<endl;
     for(int i=0;i<n;i++)
     {
       cout<<ans[i]<<" ";
     }
   }
}
