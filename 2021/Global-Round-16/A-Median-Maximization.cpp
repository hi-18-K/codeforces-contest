// https://codeforces.com/contest/1566/problem/a

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
    int n, sum;
    cin >> n >> sum;
    if(n == 1) {
    	cout << sum; ln; return;
    }
    else if(n == 2) {
    	cout << sum/2; ln; return; 
    }
    int x = (n & 1) ? n/2 : (n/2 -1);
    // sum -= x;
    int y = (n-x);
    int ans = sum/y;
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
