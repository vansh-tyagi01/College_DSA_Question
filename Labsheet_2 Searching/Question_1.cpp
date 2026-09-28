// 1. Write a C++ program to implement Linear Search on an array. Display the position of the key if it is found;
//    otherwise display an appropriate message.


#include <iostream>
using namespace std;

int main(){
    int arr[5] = {10,15,20,25,30};
    bool found = false;
    int target = 30;

    int size_arr = sizeof(arr)/sizeof(int);

    for(int i=0;i<size_arr;i++){
        if(arr[i] == target){
            found = true;
            cout<<"Found :"<<i<<" "<<"Index"<<endl;
            break;
        }
    }
    if(!found){
        cout<<target<<" "<<"is not Exist in an Array"<<endl;
    }

return 0;
}