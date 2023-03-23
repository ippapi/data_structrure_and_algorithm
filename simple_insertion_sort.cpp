#include <iostream>

using namespace std;

void sp_insertion_sort(int arr[], int n){
    int x, j;

    for(int i = 1; i < n; i++){
        x = arr[i];

        for(j = i - 1; j >= 0 && x < arr[j]; j--)
            arr[j + 1] = arr[j];

        arr[j + 1] = x;
    }
}

int main(){
    int num_arr;
    cin >> num_arr;

    int arr[100];

    for(int i = 0; i < num_arr; i++)
        cin >> arr[i];

    sp_insertion_sort(arr, num_arr);

    for(int i = 0; i < num_arr; i++)
        cout << arr[i] << " ";
}