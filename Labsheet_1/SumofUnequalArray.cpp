//	WAP to print the sum of two unequal sizes array into third array. Sample Input:- A[]={1,2,3,4,5} B[]={2,4,6,8,10,12,14}
// Sample Output:- Sum[]={3,6,9,12,15,12,14}

#include <iostream>
using namespace std;

int main(){
    int A[4]={2,5,4,3};
    int B[6]={8,2,7,9,3,6};
    int sum[6]={};

    for(int i=0;i<6;i++){
        if(i>3){
            sum[i] = B[i];
        }
        else{
            sum[i] = A[i] + B[i];
        }
    }

    // print Array

    cout<<"Sum[] = ";
    for(int j=0;j<6;j++){
        cout<<sum[j]<<" ";
    }
}