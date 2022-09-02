#include<iostream>
using namespace std;
void insert(int arr[],int n){
    int i,j,key;
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = i - 1;
        }
        arr[j + 1] = key;
    }
}
void printf(int arr[],int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[] = {0,3,4,8,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    insert(arr,n);
    cout<<"Insertion sort array: ";
    printf(arr,n);
    return 0;
}