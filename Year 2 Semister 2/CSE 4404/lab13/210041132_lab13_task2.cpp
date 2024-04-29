#include<bits/stdc++.h>

using namespace std; 

bool comparePairs(const pair<long long, long long>& a, const pair<long long, long long>& b) {
    return a.second < b.second;
}

int main(){

    long long n; 
    cin >>n;
    vector <long long> v1(n) , v2(n);
    vector<pair <long long , long long> > v;

    for(long long i = 0 ; i < n ; i++){
        cin>> v1[i];
    }

    for(long long i = 0 ; i < n ; i++){
        cin>> v2[i];
    }

    for(long long i = 0 ; i < n ; i++){
        v.push_back(make_pair(v1[i], v2[i]));
    }

    sort(v.begin() , v.end() , comparePairs);

    long long activities = 1; 
    long long current = v[0].second;

    for(long long i = 1 ; i< n ; i++){
        if(v[i+1].first >= current){
            current = v[i+1].second;
            activities++;
        }
    }

    cout<<activities;
    return 0; 
}