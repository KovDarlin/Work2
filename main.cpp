#include <iostream>
using namespace std;


//1
/*bool resArr(int* arr, int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return true;
        }
    }
    return false;
}


int main() {

    int size = 0;
    int M;
    cout << "Enter a number of elements for array A: " << endl;
    cin >> M;
    int N;
    cout << "Enter a number of elements for array B: " << endl;
    cin >> N;

    int* arrA = new int[M];
    int* arrB = new int[N];
    int* arrZ = new int[M];

    cout << "Enter elements for array A: " << endl;
    for (int i = 0; i < M; i++) {
        cin >> arrA[i];
    }

    cout << "Enter elements for array B: " << endl;
    for (int i = 0; i < N; i++) {
        cin >> arrB[i];
    }


    for (int i = 0; i < M; i++) {
        bool foundInB = resArr(arrB, N, arrA[i]);
        if (!foundInB) {
            arrZ[size] = arrA[i];
            size++;
        }
    }

    cout << "Array Z: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arrZ[i] << " ";
    }
    cout << endl;

    delete[] arrA;
    delete[] arrB;
    delete[] arrZ;

    return 0;
}*/

//2
/*bool resArr(int* arr, int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return true;
        }
    }
    return false;
}


int main() {
    int size = 0;
    int M;
    cout << "Enter a number of elements for array A: " << endl;
    cin >> M;
    int N;
    cout << "Enter a number of elements for array B: " << endl;
    cin >> N;

    int* arrA = new int[M];
    int* arrB = new int[N];
    int* arrZ = new int[M + N];

    cout << "Enter elements for array A: " << endl;
    for (int i = 0; i < M; i++) {
        cin >> arrA[i];
    }

    cout << "Enter elements for array B: " << endl;
    for (int i = 0; i < N; i++) {
        cin >> arrB[i];
    }


    for (int i = 0; i < M; i++) {
        if (!resArr(arrB, N, arrA[i])) {
            arrZ[size] = arrA[i];
            size++;
        }
    }

    for (int i = 0; i < N; i++) {
        if (!resArr(arrA, M, arrB[i])) {
            arrZ[size] = arrB[i];
            size++;
        }
    }

    cout << "Array Z: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arrZ[i] << " ";
    }
    cout << endl;

    delete[] arrA;
    delete[] arrB;
    delete[] arrZ;

    return 0;
}*/
