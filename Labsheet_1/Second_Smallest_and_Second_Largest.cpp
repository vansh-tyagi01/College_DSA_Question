//	WAP to print kth smallest and kth largest element of an array. Sample Input:- Arr[]={1,2,3,4,5} k=2
// Sample Output:- 2nd Smallest=2 2nd Largest=4


#include <iostream>
using namespace std;

int main() {
    int arr[6]={5,8,9,4,3,7};
    int max=arr[0];
    int min=arr[0];

    for(int i=1;i<6;i++){
        if(arr[i]>max){
            max=arr[i];  // 9
        }
        if(arr[i]<min){
            min=arr[i];  // 2
        }
    }

    int sec_largest = arr[0];
    int sec_smallest = max;

    for(int i=0;i<6;i++){
        if(sec_largest < arr[i] && arr[i] != max){
            sec_largest = arr[i];
        }
        if(arr[i]<sec_smallest && arr[i] !=min){
            sec_smallest = arr[i];
        }
    }
    cout<<"Second Largest :"<<sec_largest<<endl;  // 8
    cout<<"Second Smallest :"<<sec_smallest<<endl;  // 4
}