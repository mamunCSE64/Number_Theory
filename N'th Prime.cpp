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
// freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
// BesidesDuplicateCharacterEraseInString s.erase(unique(s.begin(), s.end()), s.end());
// Upper/lower-> transform(s.begin(), s.end(), s.begin(), ::toupper/tolower);
using namespace std;
ll i, j, k, n, m;
const ll e=1e+9;
bool comp(pair<ll,ll> a,pair<ll,ll> b){ if(a.fi==b.fi) return (a.se>b.se);
return (a.fi<b.fi); }
// Don't get stuck on a single approach for long, think of multiple ways
// **********************|| Main Code ||********************************
//
const ll d=90000001;
bool b[d+2];
vector<ll> v;
void seive(){
    for(i=2;i*i<=d;i++){
        if(!b[i])
        for(j=i*i;j<=d;j+=i) b[j]=1;
    }
    for(i=2;i<=d;i++)
        if(!b[i]) v.pb(i);    
}
int main()
{ 
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll test = 1;
    seive();
    // cin >> test;    
    again: 
    while (test--)
    {                        
        ll n;
        cin>>n;
        // nth prime
        cout << v[n-1] nl;
    }     
}
