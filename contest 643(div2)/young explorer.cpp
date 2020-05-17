#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
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
	ll n,i,j,k;
	cin >> n;
	ll a[n];
	vector<ll> sz;
	map<ll,ll> mp;
	for(i=0;i<n;i++){
		cin >> a[i]; mp[a[i]]++;
	}
	ll rem=0,cnt=0;
	while(!(mp.empty())){
		ll x=(mp.begin())->first;
		ll temp=mp[x]+rem;
		cnt+=(temp/x);
		rem = temp%x;
		mp.erase(x);
	}
	cout << cnt << ln;
	//Below are wrong attempts!!
	/*ll cnt=0,cntr=0;
	for(i=n-1;i>=0;){
		sz.pb(a[i]);
		cnt++;
		i-=(a[i]);
	}
	if(i<-1){
		ll sum=0;
		for(j=0;j<sz.size();j++){
			sum+=(sz[j]-1);
		}
		if(sum<abs(i+1)){
			cnt--;
		}
	}
	for(i=0;i<n;){
		cntr++;
		ll x=a[i];
		i+=a[i];
		if(a[i-1]>x) i=i+(a[i]-x);
	}
	if(i>n) cntr--;
	cout << cntr << ln;*/
}
int main(){
	fastio
	ll t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
