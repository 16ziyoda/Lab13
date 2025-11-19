#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int* ptrA = &a;
    int* ptrB = &b;
    cout << *ptrA << ' ' << *ptrB << '\n';
    return 0;
}
