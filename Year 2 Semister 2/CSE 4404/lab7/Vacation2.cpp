#include<bits/stdc++.h>

using namespace std;

long long n,a[299999],b[299999],c[299999];

long long dp[299999][4];

long long solve(int dayNo, int lastActivity){

    if(dayNo == n){
        return 0;
    }

    if(dp[dayNo][lastActivity]!=-1){
        return dp[dayNo][lastActivity];
    }

    long long ans = INT_MIN;

    if(lastActivity==0){
        ans = max(ans,b[dayNo]+solve(dayNo+1,1));
        ans = max(ans,c[dayNo]+solve(dayNo+1,2));
    }
    else if(lastActivity==1){
        ans = max(ans,a[dayNo]+solve(dayNo+1,0));
        ans = max(ans,c[dayNo]+solve(dayNo+1,2));
    }
    else if(lastActivity==2){
        ans = max(ans,a[dayNo]+solve(dayNo+1,0));
        ans = max(ans,b[dayNo]+solve(dayNo+1,1));
    }
    else{
        ans = max(ans,a[dayNo]+solve(dayNo+1,0));
        ans = max(ans,b[dayNo]+solve(dayNo+1,1));
        ans = max(ans,c[dayNo]+solve(dayNo+1,2));
    }

    return dp[dayNo][lastActivity]=ans;
}


int main(){
    memset(dp,-1,sizeof(dp));

    cin>>n;

    for(int i=0; i<n ;i++){
        cin>>a[i]>>b[i]>>c[i]; 
    }

    long long ans=solve(0,3);

    cout<<ans<<endl;
}