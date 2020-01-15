#include<iostream>
using namespace std;

int main(){

    char num[50];
    cin>>num;

    int i = 0;
    if(num[i]=='9'){
        i++;
    }

    for(;num[i]!='\0';i++){
        int digit = num[i] - '0';//Convert char digit into integer
        if(digit>=5){
            digit = 9 - digit;
            num[i] = digit + '0';
        }
    }

    cout<<num<<endl;

    return 0;
}
