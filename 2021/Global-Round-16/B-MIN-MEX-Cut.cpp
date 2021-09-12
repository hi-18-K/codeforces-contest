// https://codeforces.com/contest/1566/problem/b
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
   string s;
   cin >> s;
   // int ans = 2;
   int n = s.size(), c0s = 0, c1s = 0;
   if(s[0] == '0') 	c0s += 1;
   else 			c1s += 1;
   for(int i = 1; i < n; i += 1) {
   	if(s[i] != s[i-1]) {
   		if(s[i] == '0') {
   			c0s += 1;
   			if(c0s > 2) {
   				cout << 2; ln; return;
   			}
   		}
   		else c1s += 1;
   	}
   } 
   cout << c0s; ln;
}

int main() 
{
	fastio
	ll t = 1; cin >> t; for(ll i=1;i<=t;i++)
	   // cout << "Case #" << i << ": ",
	    solve();
	return 0;
}
