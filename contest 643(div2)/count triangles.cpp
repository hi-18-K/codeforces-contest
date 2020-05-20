/*राधे कृष्णा*//*राधे कृष्णा*//*राधे कृष्णा*//*राधे कृष्णा*/
#include <iostream>
#include<string>
#include<map>
#include<queue>
#include<algorithm>
#include <cstdio> 
#include <string> 
#include <vector> 
#include<bits/stdc++.h>
#include<queue>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//#define test ll t;cin >> t;while(t--)
#define ll long long int
#define  sll stack<ll>
#define  qll queue<ll>
#define  pll pair<ll,ll>
#define  vll vector<ll>
#define  vpi vector<pair<int,int>>
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define ln "\n"
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<n;i++)
#define fab(i,a,b) for(i=a;i<b;i++)

void solve() {
	ll a,b,c,d,ans=0;
	cin >> a >> b >> c >> d;
	for(ll z=max((a+b),c);z <= b+c;z++){
		ans+= ((min(b,z-b)-max(a,z-c)+1) * (min(d+1,z)-c));
	}
	cout << ans ;
}
int main(){
	fastio
	/*ll t;
	cin >> t;
	while(t--){*/
		solve();
	//}
	return 0;
}
