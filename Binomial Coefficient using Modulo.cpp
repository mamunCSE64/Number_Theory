#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define gcd __gcd
#define int_string to_string
#define string_int stoi
#define mn(v) *min_element(v.begin(), v.end())
#define mx(v) *max_element(v.begin(), v.end())
#define index_character s.find('character')
#define countxchar count(s.begin(), s.end(), 'x')
#define index_ofX_vector find(v.begin(), v.end(), x) - v.begin()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define n1 cout << "-1" << endl
#define sorted is_sorted(v.begin(), v.end())
#define nl << endl
#define sp << " "
#define mp make_pair
#define fi first
#define se second
#define Mx LLONG_MAX
#define Mn LLONG_MIN
#define mod %1000000007
const ll N = 2e5+5;
// freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
// BesidesDuplicateCharacterEraseInString s.erase(unique(s.begin(), s.end()), s.end());
// Upper/lower-> transform(s.begin(), s.end(), s.begin(), ::toupper/tolower);
using namespace std;
ll i, j, k, n, m;
const ll e=1e+9;
bool comp(pair<long double,ll> a,pair<long double,ll> b){
    if(a.fi==b.fi) return (a.se<b.se); return (a.fi>b.fi);}
// Don't get stuck on a single approach for long, think of multiple ways
// You will destroy your dream if you stay in your comfort zone
// **********************|| Main Code ||********************************
//

 
ll power(ll base,ll md){
    ll ans=1,p=md-2; // as base is inverse so,base power will be mod-2;
    while(p){
        if(p%2) ans=(ans*base)%md,p--;
        else base=(base*base)%md,p/=2;
    }
    return ans;
}
int main()
{ 
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll test = 1;
    // cin >> test;    
    again:  
    while (test--)
    {         
        ll n,r,md;
        cin>>n>>r>>md; // NCR%md
        ll N,r1,r2;
        N=fun(n,md),r1=fun(r,md),r2=fun(n-r,md);
        cout << N sp << r1 sp << r2 nl;

        ll ans,ans1,ans2;
        ans1=power(r1,md), ans2=power(r2,md);

        ans=(N*9*89*7*5*3*(ans1*ans2)%md)%md;        
        cout << ans nl; // ans of (ncr)%md
    }       
}
