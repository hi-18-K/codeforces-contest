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
	ll n,k,i,j; bool fl=0;
	string ans="no\n";
	cin >> n >> k;
	ll a[n+1]={0};
	for(i=1;i<=n;i++)	{
		cin >> a[i];
		if(a[i] == k)	fl=1,a[i]=1;
		else if(a[i]>k)	a[i]=2;
		else if(a[i]<k)	a[i]=0;
	}
	if(n==1 && fl==1){
		ans = "yes\n";
	}
	for(i=1;i<=n-2;i++){
		for(j=i+1;j-i<=2;j++){
			if(a[i] && a[j]){
				ans="yes\n";
				break;
			}
		}
	}
	if(a[n-1] && a[n]){
		ans="yes\n";
	}
	if(fl==0)	ans="no\n";
	cout << ans ;
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
