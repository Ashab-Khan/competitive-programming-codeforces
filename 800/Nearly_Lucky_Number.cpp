//110A	Nearly Lucky Number

#include <iostream>
using namespace std;

bool isLucky(int x) {
    if (x == 0) return false;
    while (x > 0) {
        int d = x % 10;
        if (d != 4 && d != 7) return false;
        x /= 10;
    }
    return true;
}

int main() {
    long long n;
    cin >> n;

    int luckyCount = 0;
    while (n > 0) {
        int d = n % 10;
        if (d == 4 || d == 7) luckyCount++;
        n /= 10;
    }

    if (isLucky(luckyCount)) cout << "YES";
    else cout << "NO";
}
