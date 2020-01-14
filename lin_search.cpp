#include<iostream>
using namespace std;

int main(){
    int a[10];
    int n;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int key,flag=0;
    cin>>key;

    for(int j=0;j<n;j++){
        if(key==a[j]){
            cout<<"Found at index "<<j<<endl;
            flag=1;
            break;
        }
    }

    if(flag==0){
        cout<<key<<" not found."<<endl;
    }

    return 0;
}

