#include <iostream>
using namespace std;
int main() {
    int x;
    int* p = &x;
    cin >> *p;
    cout << *p << '\n';
    return 0;
}
