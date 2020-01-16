#include <iostream>
using namespace std;

void spiralPrint(int a[][10],int R,int C){
    int startRow = 0,endRow = R-1,startCol=0,endCol=C-1;
    while(startRow<=endRow && startCol<=endCol){
        //Print start row
        for(int j=startCol;j<=endCol;j++){
            cout<<a[startRow][j]<<" ";
        }
        startRow++;
        //Print end col
        for(int i=startRow;i<=endRow;i++){
            cout<<a[i][endCol]<<" ";
        }
        endCol--;
        //Print end row
        for(int j=endCol;j>=startCol;j--){
            cout<<a[endRow][j]<<" ";
        }
        endRow--;
        //Print start col
        for(int i=endRow;i>=startRow;i--){
            cout<<a[i][startCol]<<" ";
        }
        startCol++;
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
    spiralPrint(arr,R,C);
}
