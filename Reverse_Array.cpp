//  WAP to print the reverse of an array. Sample Input:- Arr[]={1,2,3,4,5} Sample Output:- 5 4 3 2 1

# include <iostream>
using namespace std;

int main() {
    int arr[6] = {10,20,30,40,50,60};
    int left = 0;
    int right = 5;

    while(left < right) {
        swap(arr[left] , arr[right]);

        left++;
        right--;
    }
    cout<<"Reverse Array :";
    for(int i=0;i<6;i++) {
        cout<<arr[i]<<" ";
    }
}