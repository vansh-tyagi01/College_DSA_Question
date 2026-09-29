// 3.  Write a C++ program to compare Linear Search and Binary Search for a given array and display their results.

#include <iostream>
using namespace std;

// Linear search
int Linear_search(int arr[] , int size , int value){
    for(int i=0;i<size;i++){
        if(arr[i] == value){
            return i;
        }
    }
    return -1;
}

// Binary_search
int Binary_search(int arr[] , int size , int value){
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

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

        mid = (start + end) / 2;
    }
    return -1;
}

int main(){
    int arr[5] = {3,5,9,12,15};

    int index_linear = Linear_search(arr , 5 , 5);
    int index_binary = Binary_search(arr , 5 , 12);

    if(index_linear == -1){
        cout<<"Linear search : element not exist"<<endl;
    }
    else
    {
        cout<<"Linear search :"<<" "<<index_linear<<endl;
    }

    if(index_binary == -1){
        cout<<"Binary search : element not exist"<<endl;
    }
    else
    {
        cout<<"Binary search :"<<" "<<index_binary<<endl;
    }
}