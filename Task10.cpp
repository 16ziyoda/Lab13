#include <iostream>
using namespace std;
int main() {
    double temp[31];
    for (int i = 0; i < 31; ++i) cin >> temp[i];
    double x;
    cin >> x;
    double* p = temp;
    int day = -1;
    for (int d = 1; d <= 31; ++d, ++p) {
        if (*p < x) {
          day = d; break; 
        }
    }
    cout << day << '\n';   // prints -1 if no such day exists
    return 0;
}
