#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end){
    if(start > end){
        return;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    return reverse(arr, start + 1, end - 1);
}

void printArray(int arr[], int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int start = 0;
    int end = 4;
    reverse(arr, start, end);

    printArray(arr, 5);
    return 0;
}