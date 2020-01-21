#include <iostream>
using namespace std;
int main() {
    int n=5,i=1;

    int mask = (1<<i);
    int ans = n|mask;
    cout<<ans<<endl;
}
