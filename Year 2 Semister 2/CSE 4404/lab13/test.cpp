#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>

typedef long long                        ll;
typedef unsigned long long               ull;
typedef long double                      ld;

#define pb        push_back
#define pob       pop_back
#define pf        push_front
#define pof       pop_front
#define mp        make_pair

using namespace std;
bool comparePairs(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v1(n), v2(n);
    vector<pair<ll,ll>> v;
    for(int i=0; i<n; i++){
        cin >> v1[i];
    }
    for(int i=0; i<n; i++){
        cin >> v2[i];
    }
    for(int i=0; i<n; i++){
        v.pb(mp(v1[i], v2[i]));
    }
    sort(v.begin(), v.end(), comparePairs);
    ll activities = 1;
    ll current = v[0].second;
    for(int i=0; i<n-1; i++){
        if(v[i+1].first > current){
            current = v[i+1].second;
            activities++;
        }
    }
    cout << activities;
    return 0;
}