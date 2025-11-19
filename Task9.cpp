#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int *pa = &a, *pb = &b, *pc = &c;
    int mn = *pa;
    if (*pb < mn) mn = *pb;
    if (*pc < mn) mn = *pc;
    cout << mn << '\n';
    return 0;
}
