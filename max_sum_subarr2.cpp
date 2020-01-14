#include<iostream>
using namespace std;

int main(){

    int a[100],n;
    int cumSum[100];
    int maxSum = 0;
    int curSum = 0;

    cin>>n;
    cin>>a[0];
    cumSum[0] = a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        cumSum[i] = cumSum[i-1] + a[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            curSum = 0;
            curSum = cumSum[j] - cumSum[i-1];
            if(curSum>maxSum){
                maxSum = curSum;
            }
        }
    }

    cout<<"Maximum sum is: "<<maxSum<<endl;


return 0;
}
