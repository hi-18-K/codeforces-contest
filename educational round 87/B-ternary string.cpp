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
#include<vector>
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
/*class first{
public:
    string str; int val;
private:
    string str2; int val2;
public:
    string get_private_string(){
        return str2;
    } 
    int mpdify_private_value(int x){
        val2=x;
    }
    int get_private_value(){
        return val2;
    }
};*/
bool comp(int a, int b) 
{ 
    return (a < b); 
} 
void solve(){
    string s;
    cin >> s;
    ll i,j,cnt,x,y,n;
    n=s.size();
    ll prf1[n], prf2[n], prf3[n]; prf1[0]=prf2[0]=prf3[0]=-1;
    if(s[0]=='1') prf1[0]=0;
    else if(s[0]=='2') prf2[0]=0;
    else if(s[0]=='3') prf3[0]=0;
    for(i=1;i<n;i++){
        prf1[i]=prf1[i-1]; prf2[i]=prf2[i-1]; prf3[i]=prf3[i-1];
        if(s[i]=='1') prf1[i]=i;
        else if(s[i]=='2') prf2[i]=i;
        else if(s[i]=='3') prf3[i]=i;
    }
    ll ans=n+1;
    for(i=2;i<n;i++){
        x=n+1;
        if(prf1[i] != -1 && prf2[i] != -1 && prf3[i] !=-1)
            x = i-min({prf1[i],prf2[i],prf3[i]},comp)+1;
        //else continue;
        if(x<ans)
            ans=x;
        if(ans==3)
            break;
    }
    if(ans==n+1)
        cout << "0\n";
    else 
        cout << ans <<ln;
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
