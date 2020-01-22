#include <iostream>
using namespace std;
//First Method
int countBits(int n){
    int ans=0;
    while(n>0){
        int last_bit = n&1;
        ans += last_bit;
        n = n >> 1;
    }
    return ans;
}
//Second method
int countBitsFast(int n){
    int ans = 0;
    while(n>0){
        n = n & (n-1);
        ans++;
    }
    return ans;
}
int main() {
    int n=15;
    cout<<countBitsFast(n)<<endl;
    cout<<__builtin_popcount(n)<<endl;

}
