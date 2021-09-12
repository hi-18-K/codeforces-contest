// https://codeforces.com/contest/1569/problem/b
// constructive algo
// ~(1200-1400)

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
    string s;
    cin >> s;
    vector<vc> ans(n, vc(n));
    for(int i = 0; i < n; i += 1) {
    	for(int j = 0; j < n; j += 1) {
    		ans[i][j] = '=';
    		if(i == j) ans[i][j] = 'X';
    	}
    }
    vi ind;
    for(int i = 0; i < n; i += 1) {
    	if(s[i] == '2') {
    		ind.pb(i);
    	}
    }
    int sz = ind.size();
    if(sz == 1 || sz == 2) {
    	cout << no, ln;
    	return;
    } 
    for(int i = 0; i < sz ; i += 1) {
    	ans[ind[(i+1)%sz]][ind[i]] = '+';
    	ans[ind[i]][ind[(i+1)%sz]] = '-';
    }
    cout << yes; ln;
    for(int i = 0; i < n; i += 1) {
    	for(int j = 0; j < n; j += 1) {
    		cout << ans[i][j];
    	}ln;
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
