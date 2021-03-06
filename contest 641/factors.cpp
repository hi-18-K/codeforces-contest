#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <iostream>
#include<string>
#include<map>
#include<queue>
#include<algorithm>
#include<stack>
#include<limits>
#include<math.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long 
#define  sll stack<ll>
#define  qll queue<ll>
#define  pll pair<ll,ll>
#define  vll vector<ll>
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define test ll t;cin >>t; while(t--)
#define ln "\n"
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<n;i++)
#define fab(i,a,b) for(i=a;i<b;i++)

ll smlst_divisor(ll n){
    ll lim = sqrt(n);
    for(ll i=3;i<=lim;i+=2){
        if(n%i==0)
            return i;
    }
    return n;
}
void solve(){
    ll n,i,j,x,y,k;
    cin >> n >> k;
    for(j=0;j<k;j++){
        if(n%2==0) {          // optimization
            x = (k-j)*2;
            n+=x;
            break;
        }
        else
            x=smlst_divisor(n);
        n+=x;
    }
    cout << n << ln;
}
int main()
{
    fastio
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
//
