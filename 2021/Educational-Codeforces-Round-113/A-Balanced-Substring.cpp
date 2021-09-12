// https://codeforces.com/contest/1569/problem/a
// implementation
// ~(900-1100)

#include<bits/stdc++.h>
using namespace std;
#define fastio 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll 				long long 
#define pll 			pair<ll,ll>
#define vll 			vector<ll>
#define vs 				vector<string>

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
