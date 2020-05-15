#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <iostream>
#include<string>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
#include<iterator>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll unsigned long long int
#define  sll stack<ll>
#define  qll queue<ll>
#define  pll pair<ll,ll>
#define  vll vector<ll>
#define mpll map<ll,ll>
#define  vpi vector<pair<int,int>>
#define f first
#define s second
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define ppb pop_back
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<n;i++)
#define fab(i,a,b) for(i=a;i<b;i++)
#define ln "\n"
#define mod 1000000007
class first{
public:
    string str; int val;
private:
    string str2; int val2;
public:
    string get_private_string(){
        return str2;
    } 
    int mpdify_private_value(int x){
        val2=x;
    }
    int get_private_value(){
        return val2;
    }
};
//codeforces 641 p2

void solve() {
    ll i,j,x,y,n,maxm=0; 
    cin >> n;
    ll a[n+1];
    for(i=1;i<=n;i++){
        cin >> a[i];
    }
    ll dp[n+1];
    for(i=1;i<=n;i++)   dp[i]=1;
    for(i=1;i<=n;i++)
    {
        for(j=i*2;j<=n;j+=i){
            if(a[j] > a[i]){
                dp[j] = max(dp[j],dp[i]+1);
            }
        }
    }
    for(i=1;i<=n;i++)   maxm=max(maxm,dp[i]);
    cout << maxm << ln;
}
int main() {
    fastio
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
     #endif*/
    fastio
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
