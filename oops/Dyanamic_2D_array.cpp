#include<iostream>
using namespace std;

int main(){
    int row = 5;
    int col = 4;

    // Step 1: Dynamic allocation of 2D array
    int** arr = new int*[row];
    for(int i = 0; i < row; i++){
        arr[i] = new int[col];

        // Step 2: Initialize with default value (e.g., 0)
        for(int j = 0; j < col; j++){
            arr[i][j] = 0;  // <-- default value
        }
    }

    // Step 3: Print the array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Optional: Free memory
    for(int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
