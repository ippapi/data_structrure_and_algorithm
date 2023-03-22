#include <bits/stdc++.h>

using namespace std;

void quick_sort(int a[], int left, int right){
    int i = left, j = right;
    int pivot = a[(left + right) / 2];

    while(i <= j){
        while(a[i] < pivot) i++;
        while(a[j] > pivot) j--;

        if(i <= j){
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }

    if(left < j) quick_sort(a, left, j);
    if(right > i) quick_sort(a, i, right);
}

int main(){
    int arr_len;
    cin >> arr_len;

    int arr[100];

    for(int i = 0; i < arr_len; i++)
        cin >> arr[i];

    quick_sort(arr, 0, arr_len - 1);

    for(int i = 0; i < arr_len; i++)
        cout << arr[i] << " ";

    return 0;
}