#include <iostream>
#include <cstring>
using namespace std;

void rotate(char* arr,int k){

    int i = strlen(arr);
    while(i>=0){
        arr[i+k] = arr[i];
        i--;
    }

    i = strlen(arr);
    int s = 0;
    int j = i-k;

    while(j<i){
        arr[s] = arr[j];
        s++;
        j++;
    }
    arr[i-k] = '\0';
}

int main() {
    char arr[100] = "HelloWorld";
    int k = 3;
    rotate(arr,k);
    cout<<arr<<endl;
}
