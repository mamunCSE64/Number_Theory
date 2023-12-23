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
#define point cout << fixed << setprecision(10)
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
// bitsize-> ll size=log2(n)+1 (last set bit=size-1; )
// first bit-> name._Find_First()
// next bit after x-> name._Find_next()
// freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
// BesidesDuplicateCharacterEraseInString s.erase(unique(s.begin(), s.end()), s.end());
// Upper/lower-> transform(s.begin(), s.end(), s.begin(), ::toupper/tolower);
using namespace std;
ll i, j, k, n, m;
const ll N = 2e5+5;
const ll e=1e+9;
const double pi=acos(-1);
bool comp(pair<long double,ll> a,pair<long double,ll> b){
    if(a.fi==b.fi) return (a.se<b.se); return (a.fi>b.fi);}
//
// Don't get stuck on a single approach for long, think of multiple ways
// You will destroy your dream if you stay in your comfort zone
// **********************|| Main Code ||********************************
//
vector<ll> v[1000];
vector<ll> visit(1000),in(1000),out(1000);
ll Time=1;
void dfs(ll node){
    in[node]=Time;Time++;
    visit[node]=1;
    for(auto child: v[node]){
        if(visit[child]==0){
            dfs(child);
        }
    }
    out[node]=Time;Time++;
}
int main()
{ 
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    point;
    ll test = 1; 
    // cin >> test;    
    again: 
    while (test--)
    {         
        ll node,edge;
        cin>>node>>edge;
        for(i=0;i<edge;i++){
            ll x,y;cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        dfs(1);
        for(i=1;i<=node;i++){
            cout << in[i] sp;
        } cout nl;
        for(i=1;i<=node;i++) cout << out[i] sp;cout nl;
    }       
}
