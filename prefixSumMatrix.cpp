#include<bits/stdc++.h>
using namespace std;

int main(){

    int rows = 4, columns = 5;

    int arr[4][5] = { 
        { 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1 }
                     };             


     for(int i = 0;i<rows;i++){
        for(int j = 1;j<columns;j++){
            arr[i][j] = arr[i][j] + arr[i][j - 1];
        }
    }

    for(int j = 0;j<columns;j++){
        for(int i = 1;i<rows;i++){
            arr[i][j] = arr[i][j] + arr[i - 1][j];
        }
    }

    return 0;
}