//71A – Way Too Long Words

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s.length() <= 10) {
            cout << s << "\n";
        } else {
            int l = s.length();
            cout << s[0] << l - 2 << s[l - 1] << "\n";
        }
    }
    return 0;
}
