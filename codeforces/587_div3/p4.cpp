/**
     * @Author: shadabKhan
     * @Date:   Saturday, September 21st 2019, 1:26:34 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Saturday, September 21st 2019, 5:09:13 pm
     */
    #include<bits/stdc++.h>
    using namespace std;
     int main()
     {
       int n;
       cin>>n;
       vector<int64_t>arr(n);
       for(int i=0;i<n;i++)cin>>arr[i];

       int64_t maxi= *max_element(arr.begin(),arr.end());

       for(int i=0;i<n;i++)
       {
         arr[i]=maxi-arr[i];
        // cout<<arr[i];
       }
        int64_t gcdd=arr[0];

       for(int i=0;i<n;i++)
       {
         gcdd=__gcd(arr[i],gcdd);
       }
       int64_t ans=0;
       for(int i=0;i<n;i++)
       {
         ans+=arr[i]/gcdd;
       }
        cout<<ans<<" "<<gcdd<<endl;
     }
