#include<bits/stdc++.h>
using namespace std;

bool isPalin(string str){
    int start = 0;
    int end = str.length();

    while(start <= end){
        if(str[start] != str[end]){
            return false;
        }
    }

    return true;
}

int main(){
    string str = "abccba";
    bool result = isPalin(str);
    cout<<result<<endl;
    return 0;
}