#include<iostream>
#include<time.h>

using namespace std;

int main(){

    long long before = clock();

    for(int i= 0 ; i<100000 ; i++){
        cout<<i<<endl;
    }

    long long time = clock();

    cout<<"Time before: "<<before<<endl;
    cout<<"time = " << time << endl; 

}