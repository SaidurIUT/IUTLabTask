//link: https://vjudge.net/contest/612537#problem/A
//password: CSE4404

#include <bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<long long,long long> &a, const pair<long,long> &b){
    return(a.second > b.second);
}

int main(){

    long long n,a,b,c,lastActivity=5,totalPoint=0;
    cin >> n;
    vector<pair<long long,long long> > vect;       

    while(n--){
        cin>>a>>b>>c;
        vect.push_back(make_pair(1,a));
        vect.push_back(make_pair(2,b));
        vect.push_back(make_pair(3,c));


        sort(vect.begin(), vect.end(),sortbysec);

        //cout<<vect[0].first<<" "<<vect[0].second<<endl;
        
        if(vect[0].first != lastActivity){
            totalPoint = totalPoint + vect[0].second;
            lastActivity = vect[0].first;

            // cout<<vect[0].second<<" "<<endl;
        }
        else{
            totalPoint = totalPoint + vect[1].second;
            lastActivity = vect[1].first;

            // cout<<vect[1].second<<" "<<endl;
        }
        vect.pop_back();
        vect.pop_back();
        vect.pop_back();
    }

    cout<<totalPoint;


}