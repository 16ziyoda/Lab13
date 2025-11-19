#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int *pa = &a, *pb = &b;
    int sum = *pa + *pb;

    cout << sum << '\n';
    return 0;
}
