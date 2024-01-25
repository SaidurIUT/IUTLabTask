#include<iostream>
#include <bits/stdc++.h>

using namespace std; 

int main(){
    int n;
    int arr[2000];
    cin>>n;

    for(int i = 0 ; i< n ; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    cout<<arr[(n-1)/2]<<endl;



}