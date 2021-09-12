// https://codeforces.com/contest/1566/problem/c
// implementation

#include<bits/stdc++.h>
using namespace std;
#define fastio 			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll 				long long 
#define pll 			pair<ll,ll>
#define pi				pair<int, int>
#define vll 			vector<ll>
#define vi 				vector<int>
#define vs 				vector<string>
#define vc				vector<char>
#define ff 				first
#define ss 				second
#define all(x) 			x.begin(),x.end()
#define pb 				push_back
#define ppb 			pop_back
#define ln 				cout << "\n" ;
#define maxHeapll 		priority_queue<ll>
#define maxHeapint		priority_queue<int>
#define minHeapll 		priority_queue <ll, vector<ll>, greater<ll> > 
#define minHeapint 		priority_queue <int, vector<int>, greater<int> > 
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
    char mat[2][n];
    for(int i = 0; i < 2; i += 1) {
    	for(int j = 0; j < n; j += 1) {
    		cin >> mat[i][j];
    	}
    }
    bool f0[n] = {0}, f1[n] = {0};
    for(int i = 0; i < n; i += 1) {
    	if(mat[0][i] == '0') f0[i] = 1;
    	else f1[i] = 1;
    	if(mat[1][i] == '0') f0[i] = 1;
    	else f1[i] = 1;
    }
    bool counted[n] = {0};
    int ans = 0;
    for(int i = 0; i < n; i += 1) {
    	if(f0[i] && f1[i]) {
    		counted[i] = 1;
    		ans += 2;
    	}
    	else if(f0[i] == 0) continue;
    	else if(f0[i] == 1) {
    		if(i > 0 && f1[i-1] && !counted[i-1] && !(f0[i-1])) {
    			counted[i-1] = counted[i] = 1;
    			ans += 2;
    		}
    		else if(i < n-1 && f1[i+1] && !(counted[i+1]) && !(f0[i+1])) {
    			counted[i+1] = counted[i] = 1;
    			ans += 2;
    		}
    		else {
    			counted[i] = 1;
    			ans += 1;
    		}
    	}
    }
    cout << ans; ln;
}

int main() 
{
	fastio
	ll t = 1; cin >> t; for(ll i=1;i<=t;i++)
	   // cout << "Case #" << i << ": ",
	    solve();
	return 0;
}
