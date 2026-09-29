// 4. Write a C++ program to implement Bubble Sort in ascending order. Display the array after each pass. 

#include <iostream>
using namespace std;

int main(){
    int arr[5] = {5,2,9,4,6};

    int size_arr = sizeof(arr)/sizeof(int);

    // Bubble sort
    cout<<"Bubble Sort Ascending Order :";
    for(int i=0;i<size_arr;i++)
        for(int j=i+1;j<size_arr;j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    for(int i=0;i<size_arr;i++){
        cout<<arr[i]<<" ";
    }

}