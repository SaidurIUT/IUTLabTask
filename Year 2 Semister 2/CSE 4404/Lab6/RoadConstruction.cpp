#include<bits/stdc++.h>
using namespace std;

int findLargest(list<int>myList[],int n){

    int largest = 0;
    for(int i=1 ; i<= n ; i++){
        if(largest < myList[i].size()){
            largest=myList[i].size();
        }
    }
    return largest;
}

int main(){
    int n,m,a,b,largest,components;
    cin >> n >> m;
    list<int>myList[n+1];
    components=n;
    
    for(int i = 1 ; i <= n ; i++){
        myList[i].push_back(i);
    }

    while(m--){
        components--;
        cin >> a >> b;
        myList[a].push_back(b);
        myList[b].push_back(a);
        largest = findLargest(myList,n);
        cout<<components<<" "<<largest<<endl;
    }
}