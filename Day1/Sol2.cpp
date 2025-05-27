#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        // Print ascending characters
        for (char c = 'A'; c <= 'A' + i; c++)
            cout << c;

        // Print descending characters
        for (char c = 'A' + i - 1; c >= 'A'; c--)
            cout << c;

        cout << endl;
    }

    return 0;
}
