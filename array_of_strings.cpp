#include <iostream>
using namespace std;
int main() {
    char a[10][100];
    int n;
    cin>>n;
    cin.ignore(); //Ignore \n

    for(int i=0;i<n;i++){
        cin.getline(a[i],100);
    }

    //Print strings
    for(int j=0;j<n;j++){
        cout<<a[j]<<endl;
    }

}
