#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Factorial calculation
    int totalPermutations = 1;
    for (int i = 2; i <= n; i++) {
        totalPermutations *= i;
    }

    // Permutation generation using backtracking
    vector<int> stack = arr;  // working copy
    vector<vector<int>> results;

    // Manual backtracking (recursive logic inline)
    int l = 0;
    vector<int> indices(n, 0);

    cout << "Permutations:\n";
    while (l < n) {
        if (indices[l] < l) {
            if (l % 2 == 0) {
                swap(stack[0], stack[l]);
            } else {
                swap(stack[indices[l]], stack[l]);
            }

            // Print permutation
            for (int val : stack) {
                cout << val << " ";
            }
            cout << endl;

            indices[l]++;
            l = 0;
        } else {
            indices[l] = 0;
            l++;
        }
    }

    cout << "Total number of combinations: " << totalPermutations << endl;

    return 0;
}
