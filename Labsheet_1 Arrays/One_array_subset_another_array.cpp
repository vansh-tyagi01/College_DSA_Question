//	WAP to determine whether one array is subset of another array. Both arrays are not sorted, different sized and elements are distinct.
// Sample Input:- Arr1[] = {11, 1, 13, 21, 3, 7}, Arr2[] = {11, 3, 7, 1}
// Sample Output:- Yes


#include <iostream>
using namespace std;

int main(){
    int Arr1[] = {11, 1, 13, 21, 3, 7};
    int Arr2[] = {11, 22, 1, 7};

    int arr1 = 6;
    int arr2 = 4;

    int found = 0;
    for(int i=0;i<arr2;i++){
        for(int j=0;j<arr1;j++){
            if(Arr2[i] == Arr1[j]){
                found+= 1;
                break;
            }
        }
    }
    if(found == arr2){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}