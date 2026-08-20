#include <iostream>
using namespace std;

int main() {
    int arr[100], n, k, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter value of K: ";
    cin >> k;

    // Handle cases where K > n
    k = k % n;

    cout << "\n1. Left Rotation\n";
    cout << "2. Right Rotation\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        // Left Rotation
        for (int r = 0; r < k; r++) {
            int temp = arr[0];

            for (int i = 0; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }

            arr[n - 1] = temp;
        }

        cout << "Array after Left Rotation: ";
    }
    else if (choice == 2) {
        // Right Rotation
        for (int r = 0; r < k; r++) {
            int temp = arr[n - 1];

            for (int i = n - 1; i > 0; i--) {
                arr[i] = arr[i - 1];
            }

            arr[0] = temp;
        }

        cout << "Array after Right Rotation: ";
    }
    else {
        cout << "Invalid choice!";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
