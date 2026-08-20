#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the size of matrix:";
    cin>>n;

    int a[100][100];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    bool diagonal = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && a[i][j] != 0) {
                diagonal = false;
                break;
            }
        }
    }
if(diagonal)
    cout<<"the matrix is diagonal matrix";
    else
    cout<<"not a diagonal matrix";
return 0;
}