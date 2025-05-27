#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int layers;
    cout << "Enter number of rows: ";
    cin >> layers;

    int size = 2 * layers - 1;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            int distanceFromTop = row;
            int distanceFromLeft = col;
            int distanceFromRight = size - 1 - col;
            int distanceFromBottom = size - 1 - row;

            cout << (layers - min(min(distanceFromTop, distanceFromBottom),
                                  min(distanceFromLeft, distanceFromRight))) << " ";
        }
        cout << endl;
    }

    return 0;
}
