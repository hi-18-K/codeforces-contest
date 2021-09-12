// https://codeforces.com/contest/1569/problem/c
// math, combinatorics
// ~(1500-1600)

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
#define mod 			998244353
#define inf 			1e18
#define yes "YES"
#define no "NO"


 

void solve(){
    ll n;
    cin >> n;
    vll v(n);
    for(auto & it: v) {
    	cin >> it;
    }
    sort(all(v));
    if(v[n-1] == v[n-2]) {
    	ll ans = 1;
    	for(ll i = 1; i <=n; i += 1) {
    		ans = (ans * i) % mod; 
    	}
    	cout << ans % mod; ln; return; // ans is n!
    }
    else if(v[n-1] > v[n-2] + 1) {
    	cout << 0; ln; return; // ans is 0
    }
    else {
    	ll cnt = 0;
    	for(ll i = n-2; i >= 0; i -= 1) {
    		if(v[i] == v[n-2]) cnt += 1;
    		else break;
    	}
    	ll ans = 1, sub = 1;
    	for(int i = 1; i <= n; i += 1) {
    		ans = (ans * i) % mod;
    		if(i != cnt +1) {
    			sub = (sub * i) % mod;
    		}
    	}
    	ans = (ans - sub + mod) % mod; // ans is: n! - (C(n, cnt +1) * 1 * cnt! * (n-(cnt+1))! ) ==> n! - (n!/(cnt+1))
    	cout << ans; ln;
    }
}

int main() 
{
	fastio
	ll t = 1; cin >> t; for(ll i=1;i<=t;i++)
	   // cout << "Case #" << i << ": ",
	    solve();
	return 0;
}
