#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <iostream>
#include<string>
//#include<map>
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
#define fabl(i,a,b) for(i=a;i<b;i++)
#define fabe(i,a,b) for(i=a;i<=b;i++)
#define fre(i,a,b) for(i=b;i>=a;i--)
int max(int a, int b){
    if(a>=b) return a;
    return b;
}
void solve(){
    ll m,n;
    cin >> n >> m;
    if(n%2==0){
        cout << (n/2)*m << ln;
    }
    else if(m%2==0){
        cout << (m/2)*n << ln;
    }
    else if(n%2 != 0 && m%2 != 0){
        ll ans = m*(n/2) + (m/2 + 1);
        cout << ans << ln;
    }
}
int main(){
    fastio ll t; cin >> t; while(t--)
    solve();
}
