#include<bits/stdc++.h>
using namespace std;
#define fastio 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll 				long long 
#define pll 			pair<ll,ll>
#define vll 			vector<ll>
#define vs 				vector<string>
#define ff 				first
#define ss 				second
#define all(x) 			x.begin(),x.end()
#define pb 				push_back
#define ppb 			pop_back
#define ln 				cout << "\n" ;
#define maxHeapll 		priority_queue<ll>
#define minHeapll 		priority_queue <ll, vector<ll>, greater<ll> > 
#define ps(x,y)         fixed << setprecision(y) << x
#define fill(a,b)       memset(a, b, sizeof(a))

/*************************    	 CONSTANTS 		******************************/
#define mod 			1000000007
#define inf 			1e18
#define yes "YES"
#define no "NO"


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    // int l = -1, r = -1;
    vector<int> dp(n, 0);
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i += 1) {
    	if(i != 0) {
    		dp[i] = dp[i-1];
    	}
    	if(s[i] == 'a') {
    		dp[i] += 1;
    	}
    	else {
    		dp[i] -= 1;
    	}
    	if(dp[i] == 0) {
    		cout << 1 << " " << i+1; ln; return;
    	}
    	else if(mp.count(dp[i])) {
    		cout << mp[dp[i]] + 1 +1<< " " << i+1; ln; return;
    	}
    	// cout << i << " " << dp[i] ; ln;
    	mp[dp[i]] = i;
    }
    cout << -1 << " " << -1; ln;
}

int main() 
{
	fastio
	ll t = 1; cin >> t; for(ll i=1;i<=t;i++)
	   // cout << "Case #" << i << ": ",
	    solve();
	return 0;
}
