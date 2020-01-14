#include<iostream>
using namespace std;

int main(){

    int a[5] = {1,2,3,4,5};
    int maxSum = 0;
    int curSum = 0;
    //int left = -1;
    //int right = -1;

    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            curSum = 0;
            for(int k=i;k<=j;k++){
                curSum+=a[k];
            }
            if(curSum > maxSum)
               maxSum = curSum;
               //left = i;
               //right = j;
            }
        }
    cout<<"Maximum sum is: "<<maxSum<<endl;    
}
    

