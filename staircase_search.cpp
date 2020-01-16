#include <iostream>
using namespace std;

void staircase(int arr[][10],int R,int C,int key){
    int i=0,j=C-1;
    int flag=0;

    while(i<R && j>=0){
        if(arr[i][j]==key){
            cout<<"Element found. "<<i<<","<<j<<endl;
            flag=1;
            break;
        }
        else if(arr[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
    if(flag==0){
        cout<<"Element not found.";
    }
}

int main() {
    int arr[10][10];
    int R,C,k;
    cin>>R>>C;

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>arr[i][j];
        }
    }
    cin>>k;
    staircase(arr,R,C,k);
}
