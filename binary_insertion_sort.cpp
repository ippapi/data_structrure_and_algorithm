#include <iostream>

using namespace std;

void binary_insertion_sort(int arr[], int n){
    int x, left, right, mid;

    for(int i = 1; i < n; i++){
        x = arr[i];

        left = 0;
        right = i - 1;

        while(left <= right){
            mid = (left + right) / 2;

            if(arr[mid] >= x) right = mid - 1;
            else if(x > arr[mid]) left = mid + 1;
        }

        for(int j = i - 1; j >= left; j--){
            arr[j + 1] = arr[j];
        }

        arr[left] = x;
    }
}

int main(){
    int num_arr;
    cin >> num_arr;

    int arr[100];

    for(int i = 0; i < num_arr; i++)
        cin >> arr[i];

    binary_insertion_sort(arr, num_arr);

    for(int i = 0; i < num_arr; i++)
        cout << arr[i] << " ";
}