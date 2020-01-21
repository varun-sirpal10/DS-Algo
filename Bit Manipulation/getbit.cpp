#include <iostream>
using namespace std;
int main() {
    int n=10,i=4;

    int mask = (1<<i);
    if(n&mask>0){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
}
