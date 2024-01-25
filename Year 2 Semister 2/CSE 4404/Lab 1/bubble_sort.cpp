#include <iostream>
#include <fstream>
//#include <windows.h>
#include<time.h>
#include <bits/stdc++.h>

#define len 500000

using namespace std;


void bubble_sort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++){ 
            if (arr[j] > arr[j + 1]){ 
                swap(arr[j], arr[j + 1]); 
            }    
        }
    }    
} 


int main(){
    int ar[len], i, temp;
    long int before, after;

    ifstream in("random_numbers.txt");
    for(i = 0; i < len; i++){
        in >> ar[i];
    }


    before = clock(); // used to start timer
    bubble_sort(ar, len);
    after = clock(); // used to end timer
    
    // cout<<"Sorted list: ";
    // for(i = 0; i < len; i++){
    //     cout << ar[i] << " ";
    // }

    
    cout << "\nExecution Time: " << (after - before) << "ms";
    return 0;
}
