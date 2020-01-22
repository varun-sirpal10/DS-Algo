#include <iostream>
using namespace std;
int main() {
    int n=15,m=2;
    int i=1,j=3;

    int a = -1<<(j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    n = n & mask;

    int ans = n | (m<<i);  
    cout<<ans<<endl;
}
