#include "settings.h"

void reverse(double arr[], int count) {
    double arr2[5] = {};
    for (int i = 0; i < 5; i++) {
        arr2[i] = arr[count];
        count--;
        cout << arr2[i] << " ";
    }
}

void reverse(double arr2[]) {
    int count = 5;
    double arr[5] = {};
    for (int i = 0; i < 5; i++) {
        arr2[i] = arr[count];
        count--;
        cout << arr2[i] << " ";
    }
}

void reverse(double arr[], int i, int count) {
    double arr2[5] = {};
    for (i = 0; i < 5; i++) {
        arr2[i] = arr[count];
        count--;
        cout << arr2[i] << " ";
    }
}

int main()
{
    reverse();
}