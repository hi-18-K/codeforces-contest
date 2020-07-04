#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <iostream>
#include<string>
#include<map>
#include<queue>
#include<algorithm>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long 
#define  sll stack<ll>
#define  qll queue<ll>
#define  pll pair<ll,ll>
#define  vll vector<ll>
#define  vpi vector<pair<int,int>>
#define f first
#define s second
#define pb push_back
#define ppb pop_back
#define ln "\n"
#define fab(i,a,b) for(i=a;i<b;i++)
#define fabe(i,a,b) for(i=a;i<=b;i++)
#define fre(i,a,b) for(i=b;i>=a;i--)
# include <cstdio> 
# include <string> 
# include <vector> 
//PALINDROMIC PATH CF
void solve(){
    ll n,m,i,j,x,y;
    cin >> n >> m;
    bool a[n][m];
    ll group[n+m-1][2];
    for(i=0;i<n+m-1;i++){
        group[i][0]=0;group[i][1]=0;
    }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            cin >> a[i][j];
            group[i+j][a[i][j]]++;
        }    

    ll ans=0;
    for(i=0;i<n+m-1;i++){
        j = n+m-2-i;
        if(i<=j) continue;
        ans+=min(group[i][0] + group[j][0] , group[i][1] + group[j][1]);
    }
    cout << ans <<ln;
}
int main(){
    fastio ll t; cin >> t; while(t--)
    solve();
    return 0;
}
