#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    unordered_set<int> seen;

    while (n != 1 && seen.find(n) == seen.end()) {
        seen.insert(n);

        // Calculate sum of squares of digits
        int sum = 0, temp = n;
        while (temp != 0) {
            int digit = temp % 10;
            sum += digit * digit;
            temp /= 10;
        }

        n = sum;
    }

    if (n == 1)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
