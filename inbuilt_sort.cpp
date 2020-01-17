#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a[] = {1,5,-2,10,7,9};
    int n = sizeof(a)/sizeof(int);

    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
