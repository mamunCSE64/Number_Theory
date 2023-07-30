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
// **********************|| Main Code ||********************************
//
void fun(vector<ll> ans[],vector<ll> base[],ll n){
    vector<ll> t[n];
    for(i=0;i<n;i++){ // upto row of first matrix
        for(j=0;j<n;j++){ // upto column of second matrix **But here n==m;
            ll sum=0;
            for(k=0;k<n;k++){                
                sum+=ans[i][k]*base[k][j]; // multiply row*colomn value
            }
            t[i].pb(sum);
        }
    }
    for(i=0;i<n;i++) ans[i]=t[i]; // insert the multiplication matrix
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
        ll n,p,x;
        cin>>n>>p; // taking n*n matrix and power
        vector<ll> v[n],ans[n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){              
                cin>>x,v[i].pb(x);     // taking base matrix
                if(i==j) ans[i].pb(1);  // initialize identity/result matrix 
                else ans[i].pb(0);
            }
        }               
        while(p){
            if(p%2) fun(ans,v,n),p--;        
            else  fun(v,v,n),p/=2;        
        }          
        for(i=0;i<n;i++){ // the result matrix
            for(j=0;j<n;j++) cout << ans[i][j] sp;cout nl;
        }
    }       
}
