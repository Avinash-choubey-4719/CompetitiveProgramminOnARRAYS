#include<bits/stdc++.h>
using namespace std;

void update(int arr[], int left, int right, int x){
    for(int i = left;i<=right;i++){
        arr[i] += x;
    }
}

void printArray(int arr[], int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int left = 2;
    int right = 4;
    int x = 2;
    int n = 5;

    printArray(arr, n);
    return 0;
}