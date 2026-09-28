//	WAP to find the first repeating element in an array. Sample Input:- Arr[] = {10, 5, 3, 4, 3, 5, 6}
// Sample Output:- 5


#include <iostream>
using namespace std;

int main(){
    int Arr[] = {10, 5, 3, 4, 3, 5, 7};

    bool found = false;
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(Arr[i] == Arr[j]){
                found = true;
                cout<<Arr[i]<<" ";
                break;
            }
        }
        
        if(found){
            break;
        }

    }
}