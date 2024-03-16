#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    vector<long long>h(n);
    vector<long long>dp(n,1e9+7);
    dp[0]=0;
    for(int i=0;i<n;i++){
        cin>>h[i];
    } 
    for(long long i=0;i<n;i++){
        for(long long j=i+1;j<=i+k;j++){
            if(j<n){
                dp[j]=min(dp[j],dp[i]+abs(h[i]-h[j]));
            }
        }
    }
    cout<<dp[n-1];
    
}