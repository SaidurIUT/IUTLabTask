#include <iostream>
#include <fstream>
//#include <windows.h>
#include<time.h>
#include <bits/stdc++.h>

#define len 50000

using namespace std;


void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return;
 
    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

int main(){
    int ar[len], i, temp;
    long int before, after;

    ifstream in("random_numbers.txt");
    for(i = 0; i < len; i++){
        in >> ar[i];
    }

    //Call the sort functions here
    before = clock(); // used to start timer
    sort(ar, ar + len);
    after = clock(); // used to end timer
    
    // cout<<"Sorted list: ";
    // for(i = 0; i < len; i++){
    //     cout << ar[i] << " ";
    // }

    
    cout << "\nExecution Time: " << (after - before) << "ms";
    return 0;
}



