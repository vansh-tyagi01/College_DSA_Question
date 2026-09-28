//	WAP to find duplicate elements in an array. Sample Input:- Arr[]={1,4,3,4,5,1}
// Sample Output:- 1 4


#include <iostream>
using namespace std;

int main(){
    int arr[7]={1,5,2,9,3,2,5};

    // Duplicate elements
    cout<<"Duplicate Elements :";
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
}