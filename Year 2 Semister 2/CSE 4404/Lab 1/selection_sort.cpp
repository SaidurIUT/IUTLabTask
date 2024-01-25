#include <iostream>
#include <fstream>
//#include <windows.h>
#include<time.h>
#include <bits/stdc++.h>

#define len 500000

using namespace std;


void selection_sort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    for (i = 0; i < n - 1; i++) { 
  
        min_idx = i; 
        for (j = i + 1; j < n; j++) { 
            if (arr[j] < arr[min_idx]) 
                min_idx = j; 
        } 

        if (min_idx != i) 
            swap(arr[min_idx], arr[i]); 
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
    selection_sort(ar, len);
    after = clock(); // used to end timer
    
    // cout<<"Sorted list: ";
    // for(i = 0; i < len; i++){
    //     cout << ar[i] << " ";
    // }

    
    cout << "\nExecution Time: " << (after - before) << "ms";
    return 0;
}
