#include <iostream>
using namespace std;

void wavePrint(int a[][10],int R,int C){
    //Iterate over columns
    for(int j=0;j<C;j++){
        if(j%2==0){
            //Even columns
            for(int i=0;i<R;i++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            //Odd columns
            for(int i=R-1;i>=0;i--){
                cout<<a[i][j]<<" ";
            }
        }
    }
}

int main() {
    int arr[10][10];
    int R,C;
    cin>>R>>C;

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>arr[i][j];
        }
    }
    wavePrint(arr,R,C);
}
