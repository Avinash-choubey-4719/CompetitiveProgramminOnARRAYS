#include<bits/stdc++.h>
using namespace std;

int sumOfElements(int arr[], int index){
    if(index < 0){
        return 0;
    }

    return arr[index] + sumOfElements(arr, index - 1);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int index = 4;

    int result = sumOfElements(arr, index);
    cout<<result<<endl;
    return 0;
}