#include <iostream>
#include <string>
using namespace std;

int main() {
    int p, q;
    cout << "Enter the range (p and q): ";
    cin >> p >> q;

    cout << "The Kaprekar Numbers are:" << endl;
    int count = 0;

    for (int i = p; i <= q; i++) {
        // Calculate square and convert to string
        long long square = (long long)i * i;
        string s = to_string(square);

        int len = s.length();
        // Split string into left and right parts
        string leftStr = (len > 1) ? s.substr(0, len / 2) : "0";
        string rightStr = s.substr(len / 2);

        int left = stoi(leftStr);
        int right = stoi(rightStr);

        if (left + right == i) {
            cout << i << " ";
            count++;
        }
    }

    cout << endl;
    cout << "Frequency of Kaprekar numbers is: " << count << endl;

    return 0;
}
