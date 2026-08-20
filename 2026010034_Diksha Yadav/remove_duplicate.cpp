#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    bool duplicateFound = false;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Remove duplicates
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; ) {
            if (arr[i] == arr[j]) {
                duplicateFound = true;

                // Shift elements to the left
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }

    if (duplicateFound) {
        cout << "Array after removing duplicates: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "No duplicate elements were provided by you.";
    }

    return 0;
}
