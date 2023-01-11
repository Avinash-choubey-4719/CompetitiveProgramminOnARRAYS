#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    int sum = 0;

    for(sum = 0;n>0;sum += n%10, n = n/10)
        ;

    return sum;
}

int main(){
    int n = 123;
    int result = sumOfDigits(n);
    cout<<result<<endl;
    return 0;
}