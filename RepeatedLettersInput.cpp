#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an uppercase letter: ";
    cin >> ch;

    int n = ch - 'A' + 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << char('A' + i) << " ";
        }
        cout << endl;
    }

    return 0;
}
