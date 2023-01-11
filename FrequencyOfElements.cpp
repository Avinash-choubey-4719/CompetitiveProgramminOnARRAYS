#include<bits/stdc++.h>
using namespace std;

unordered_map<int, int> frequency(int arr[], int n){
    unordered_map<int, int> result;

    for(int i = 0;i<n;i++){
        result[arr[i]]++;
    }

    return result;
}

int main(){
    int arr[] = {1, 2, 2, 1};
    int n = 4;
    unordered_map<int, int> result = frequency(arr, n);
    for(auto itr : result){
        cout<<itr.first<<" "<<itr.second<<endl;
    }

    return 0;
}