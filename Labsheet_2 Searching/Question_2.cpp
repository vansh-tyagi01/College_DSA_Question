// 2.  Write a C++ program to implement Binary Search on a sorted array. Display the position of the key if it is found.

#include <iostream>
using namespace std;

int Binary_Search(int arr[] , int size , int value){
    int start = 0;
    int end = size - 1;

    int mid = (start + end)/2;

    while(start <= end){
        if(arr[mid] == value){
            return mid;
        }

        if(value > arr[mid]){
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end)/2;
    }
    return -1;
}

int main(){
    int arr[8] = {2,3,5,8,9,17,18,21};

    int index = Binary_Search(arr , 8 , 88);
    if(index == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Index is search element :"<<" "<<index<<endl;
    }


}