#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
void Selection(int arr[],int n){
    int i,j,min;
    for (i = 0; i < n - 1; i++){
        min = i;
    for (j = i+1; j < n; j++)
        if(arr[j] < arr[min])
            min = j;
            swap(arr[min],arr[i]);
    }
}
void printf(int arr[],int n){
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";    
}
int main(){
    int arr[] = {0,3,4,8,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    Selection(arr,n);
    cout<<"Selection sort array: ";
    printf(arr,n);
    return 0;
}