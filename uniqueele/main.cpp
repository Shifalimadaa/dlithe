#include <iostream>
using namespace std;

int uniqueArray(int *arr, int n) {
    int k = 0;
    for (int i = 0; i < n; ++i) {
        int flag=0;
        for (int j = 0; j < k; ++j) {
            if (arr[i] == arr[j])
                {
                flag=1;
                break;
            }
        }
      if (!flag) {
            arr[k++] = arr[i];
    }
    }
    return k;
}

int main() {
    int n;
    cout << "Enter size n: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter te elements:\n";
    for (int i = 0; i< n;i++)
       cin >> arr[i];
    int uCount = uniqueArray(arr, n);
    cout << "Unique count = " << uCount << "\n";
    cout << "Unique elements:\n";
    for (int i = 0; i < uCount; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    delete[] arr;
    return 0;
}
