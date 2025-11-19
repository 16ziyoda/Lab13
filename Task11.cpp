#include <iostream>
using namespace std;
int main() {
    int *p1, *p2, *p3, i, j, sum;
    p1 = &i; p2 = &j; p3 = &sum;
    do {
        cin >> *p1 >> *p2;
    } while (!(*p1 < *p2) || *p1 >= 100 || *p2 >= 100);
    *p3 = 0;
    for (int k = *p1 + 1; k < *p2; ++k) *p3 += k;
    cout << *p3 << '\n';
    return 0;
}
