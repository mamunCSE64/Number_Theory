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
void fun(vector<ll> ans[],vector<ll> base[]){
    vector<ll> r[2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            ll sum=0;
            for(k=0;k<2;k++){
                sum+=ans[i][k]*base[k][j];
            }
            r[i].pb(sum);
        }
    }
    for(i=0;i<2;i++) ans[i]=r[i];   
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
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll> base[2],ans[2];        
        base[0]={0,1},base[1]={1,1};
        ans[0]={1,0},ans[1]={0,1};        
        ll x=n-2; // a is the first value of series
        while(x){
            if(x%2) fun(ans,base),x--;
            else fun(base,base),x/=2;
        }  
        // N'th number of fibonacci series       
        cout << a*ans[0][1]+b*ans[1][1] nl;        
    }       
}
