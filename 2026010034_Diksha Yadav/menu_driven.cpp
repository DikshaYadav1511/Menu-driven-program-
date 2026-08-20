#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0;
    int choice, pos, value, key;
    bool found;

    do {
        cout << "\n------ MENU ------\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter number of elements: ";
                cin >> n;

                cout << "Enter " << n << " elements:\n";
                for (int i = 0; i < n; i++) {
                    cin >> arr[i];
                }
                break;

            case 2:
                if (n == 0) {
                    cout << "Array is empty.\n";
                } else {
                    cout << "Array elements are: ";
                    for (int i = 0; i < n; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 3:
                cout << "Enter position (1 to " << n + 1 << "): ";
                cin >> pos;

                if (pos < 1 || pos > n + 1) {
                    cout << "Invalid position!\n";
                } else {
                    cout << "Enter value to insert: ";
                    cin >> value;

                    for (int i = n; i >= pos; i--) {
                        arr[i] = arr[i - 1];
                    }

                    arr[pos - 1] = value;
                    n++;

                    cout << "Element inserted successfully.\n";
                }
                break;

            case 4:
                if (n == 0) {
                    cout << "Array is empty.\n";
                } else {
                    cout << "Enter position to delete (1 to " << n << "): ";
                    cin >> pos;

                    if (pos < 1 || pos > n) {
                        cout << "Invalid position!\n";
                    } else {
                        for (int i = pos - 1; i < n - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        n--;
                        cout << "Element deleted successfully.\n";
                    }
                }
                break;

            case 5:
                if (n == 0) {
                    cout << "Array is empty.\n";
                } else {
                    cout << "Enter element to search: ";
                    cin >> key;

                    found = false;
                    for (int i = 0; i < n; i++) {
                        if (arr[i] == key) {
                            cout << "Element found at position " << i + 1 << ".\n";
                            found = true;
                            break;
                        }
                    }

                    if (!found) {
                        cout << "Element not found.\n";
                    }
                }
                break;

            case 6:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);
    return 0;
}
