#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr1[10][10],N;
    cin>>N;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>arr1[i][j];
        }
    }

    //Taking mirror image - Reverse rows
    int j,k;
    for(int i=0;i<N;i++){
        j = 0;
        k = N-1;
        while(j<k){
            swap(arr1[i][j],arr1[i][k]);
            j++;
            k--;
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i<j){
                swap(arr1[i][j],arr1[j][i]);
            }
        }
    }
    

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}
