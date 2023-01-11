#include<bits/stdc++.h>
using namespace std;

int findSum(int arr[], int index){
    if(index < 0){
        return 0;
    }

    return pow(arr[index], 2) + findSum(arr, index - 2);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int sum1 = findSum(arr, 4);
    int sum2 = findSum(arr, 3);

    sum2 = -1*sum2;

    int result = sum1 + sum2;
    cout<<result<<endl;
    return 0;
}