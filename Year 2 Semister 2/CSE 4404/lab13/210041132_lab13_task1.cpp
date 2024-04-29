#include<bits/stdc++.h>

using namespace std;

bool comparePairs(const pair<long long , long long> &a,const pair<long long , long long> &b){
    if(a.first != b.first){
        return a.first < b.first;
    }
    return a.second > b.second ; 
}

int main(){
    long long n ; 
    cin >> n ;

    vector<pair<long long, long long> > v;

    long long job_id, deadline , profit;

    while(n--){
        cin >> job_id >> deadline >> profit;
        v.push_back(make_pair(deadline, profit));
    }

    sort(v.begin(),v.end(),comparePairs);

    long long count = 1; 
    long long date =v[0].first;
    long long temp = v[0].second;
    vector <long long> res ;

        long long total = 0;
    for(auto x: v){
        if(x.first >= count){
            res.push_back(x.second);
            count++;
        }
    }
    for(auto x: res){
        total += x;
    }
    cout << res.size() << " " << total;



    return 0;

    
}