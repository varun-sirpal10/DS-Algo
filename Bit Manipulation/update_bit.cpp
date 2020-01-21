#include <iostream>
using namespace std;
int main() {
    int n=5;
    int i=1,v=1;

    int mask = ~(1<<i);
    n = n & mask;

    int mask2 = (v<<i);
    int ans = n | mask2;
    cout<<ans<<endl;
}
