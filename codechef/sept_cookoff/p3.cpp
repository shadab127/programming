/**
 * @Author: shadabKhan
 * @Date:   Sunday, September 22nd 2019, 9:22:27 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Monday, September 23rd 2019, 1:28:46 am
 */



#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(a) ((int)a.size())
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(),v.end()
#define dbg(a) cout<<#a<<" = "<<a<<endl
#define dbg2(a,b) cout<<#a<<" = "<<a<<", "<<#b<<" = "<<b<<endl
#define dbg3(a,b,c) cout<<#a<<" = "<<a<<", "<<#b<<" = "<<b<<", "<<#c<<" = "<<c<<endl
#define dbg4(a,b,c,d) cout<<#a<<" = "<<a<<", "<<#b<<" = "<<b<<", "<<#c<<" = "<<c<<", "<<#d<<" = "<<d<<endl
#define ld long double
#define pii pair<int,int>
#define vi vector<int>

const int mod = 1e9 + 7;

void solve()
{
    int a,b,c;cin>>a>>b>>c;
    if(a==0){
        if(c%2==1) cout<<"NO\n";
        else{
            if(c==0&&b%2) cout<<"NO\n";
            else if(b==1) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    else if(a==1){
        if(c%2==0) cout<<"NO\n";
        else{
            if(b==0) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    else{
        if((a+c)%2==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed << setprecision(11);
    clock_t beg=clock();
    int t=1, n;
    cin>>t;
    // n = t;
    while(t--){
        // cout << "Case #" << n-t << ": ";
        solve();
    }
    //
    clock_t end=clock();
    fprintf(stderr, "%lf sec\n", (double)(end-beg)/(CLOCKS_PER_SEC));
    return 0;
}
