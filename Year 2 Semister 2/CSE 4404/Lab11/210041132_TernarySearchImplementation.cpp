#include <bits/stdc++.h>
using namespace std;


int ternarySearchRecursive(int l,int r ,int key , int arr[]){
    if(r >= l){
        int mid1 = l +(r-l)/3;
        int mid2 = r -(r-l)/3;

        if(arr[mid1]==key){
            return mid1;
        }
        if(arr[mid2]==key){
            return mid2;
        }

        if(key < arr[mid1]){
            return ternarySearchRecursive(l,mid1-1,key,arr);
        }
        else if(key > arr[mid2]){
            return ternarySearchRecursive(mid2+1,r,key,arr);
        }
        else{
            return ternarySearchRecursive(mid1+1,mid2-1,key,arr);
        }
    }

    return -1;
}


int ternarySearchIterative(int l, int r, int key, int arr[]) {
    while (r >= l) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        if (arr[mid1] == key) {
            return mid1;
        }
        if (arr[mid2] == key) {
            return mid2;
        }

        if (key < arr[mid1]) {
            r = mid1 - 1;
        } else if (key > arr[mid2]) {
            l = mid2 + 1;
        } else {
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }

    return -1;
}



int main(){
    int l,r,p,key;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    l=0;
    r=9;
    
    cout<<"Using Recurtion:"<<endl;

    key = 5;
    p = ternarySearchRecursive(l,r,key,arr);
    cout<<"Index of "<<key<<" is "<<p<<endl;

    key = 50;
    p = ternarySearchRecursive(l,r,key,arr);
    cout<<"Index of "<<key<<" is "<<p<<endl;



    cout<<endl<<"Using Iterative:"<<endl;

    key = 5;
    p = ternarySearchRecursive(l,r,key,arr);
    cout<<"Index of "<<key<<" is "<<p<<endl;

    key = 50;
    p = ternarySearchRecursive(l,r,key,arr);
    cout<<"Index of "<<key<<" is "<<p<<endl;

}