#include<iostream>
using namespace std;
int main(){
    int size,pass = 0;
    int array[size] = {};
    cout<<"Enter the array size: ";
    cin>>size;
    for (int i = 0; i < size; i++){
        cout<<"Enter the array element: ";
        cin>>array[i];
    }
    cout<<endl;
    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++){
            if (array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
            
        }
        pass++;
    }
    cout<<"Sorted list of an Array is: "<<endl;
    for (int i = 0; i < size; i++){
        cout<<array[i]<<"\t";
    }
        cout<<endl;
        cout<<"Pass of Sorted list: "<<pass;
    return 0;
}
