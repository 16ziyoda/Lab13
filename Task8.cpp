#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int *pa = &a, *pb = &b, *pc = &c;
    int mx = *pa;
    if (*pb > mx) mx = *pb;
    if (*pc > mx) mx = *pc;
    cout << mx << '\n';
    return 0;
}
