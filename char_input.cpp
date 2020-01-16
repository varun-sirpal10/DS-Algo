#include <iostream>
using namespace std;
int main() {
    
    char ch[] = {'a','b','c','\0'};
    cout<<ch<<endl;

    char para[1000];
    cin.getline(para,1000,'.');

    cout<<para<<endl;


}
