//	WAP to print the union and intersection of two arrays. Sample Input:- A[]={1,2,3,4,5} B[]={2,4,6,8,10}
// Sample Output:- Union=1,2,3,4,5,6,8,10 Intersection=2,4


#include <iostream>
using namespace std;

int main() {
    int A[]={1,2,3,4,5};
    int B[]={2,4,6,8,10};

    int a = 5;
    int b = 5;

    // Union
    cout<<"Union :";
    for(int i=0;i<a;i++) {
        cout<<A[i]<<" ";
    }

    for(int i=0;i<b;i++) {
        bool found = false;

        for(int j=0;j<a;j++){
            if(B[i]==A[j]){
                found = true;
                break;
            }
        }
        if(!found){
            cout<<B[i]<<" ";
        }
    }
    cout<<endl;

    // intersection
    cout<<"Intersection :";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(A[i]==B[j]){
                cout<<A[i]<<" ";
            }
        }
    }
    
}