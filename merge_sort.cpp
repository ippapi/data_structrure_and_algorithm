#include <iostream>

using namespace std;

void merge(int a[], int left, int right, int mid){
    int i = left, j = mid + 1, run_var = left;

    int left_arr[j - i], right_arr[right - mid];

    for(int i = 0; i <= mid; i++)
        left_arr[i] = a[i];

    for(int i = mid + 1; i <= right; i++)
        right_arr[i] = a[i];

    while(i <= mid && j <= right){
        if(left_arr[i] <= right_arr[j]){
            a[run_var] = left_arr[i];
            run_var++;
            i++;
        }else{
            a[run_var] = right_arr[j];
            run_var++;
            j++;
        }
    }

    while(i <= mid){
        a[run_var] = left_arr[i];
        run_var++;
        i++;
    }

    while(j <= right){
        a[run_var] = right_arr[j];
        run_var++;
        j++;
    }
}

int merge_sort(int a[], int left, int right){
    int i = left, j = right;

    if(right - left >= 1){
        merge_sort(a, left, (left + right) / 2);
        merge_sort(a, (left + right) / 2 + 1, right);
        merge(a, left, right, (left + right) / 2);
    }else
        return 0;

}

int main(){
    int arr_len;
    cin >> arr_len;

    int arr[100];

    for(int i = 0; i < arr_len; i++)
        cin >> arr[i];

    merge_sort(arr, 0, arr_len - 1);

    for(int i = 0; i < arr_len; i++)
        cout << arr[i] << " ";

    return 0;
}