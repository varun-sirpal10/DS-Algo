#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str[] = "Hi, I am teaching about strings, in C++";
    char* ptr;

    ptr = strtok(str," ,");

    while(ptr!=NULL){
        cout<<ptr<<endl;
        ptr = strtok(NULL," ,");
    }
}
