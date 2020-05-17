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
/*class first{
public:
	string str;	int val;
private:
	string str2; int val2;
public:
	string get_private_string(){
		return str2;
	} 
	int modify_private_value(int x){
		val2=x;
	}
	int get_private_value(){
		return val2;
	}
};*/
ll maxdig(ll n){
	ll maxm=0;
	while(n>0){
		if(n%10>maxm)
			maxm=n%10;
		n=n/10;
	}
	return maxm;
}
ll mindig(ll n){
	ll minm=10;
	while(n>0){
		if(n%10<minm)
			minm=n%10;
		n=n/10;
	}
	return minm;
}
void solve() {
	ll n,k,i,j,ans,x,y;
	cin >> n >> k;
	k--;
	for(i=0;i<k;i++){
		x=mindig(n); y=maxdig(n);
		if(x==0)	break;
		else n = n + x*y;
	}
	cout << n << ln;
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
