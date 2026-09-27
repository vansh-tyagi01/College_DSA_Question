//  WAP to print sum of odd and sum of even elements in an array. Sample Input:- Arr[]={1,2,3,4,5}
// Sample Output:- SumEven=6 SumOdd=9

# include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,8,7,5,10};
    int sum_even = 0;
    int sum_odd = 0;
    int len_arr = sizeof(arr) / sizeof(arr[0]);
    
    for(int i=0;i<len_arr;i++){
        if(arr[i] % 2 == 0) {
            sum_even+=arr[i];
        }
        else {
            sum_odd+=arr[i];
        }
    }
    cout<<"Sum of Even Numbers :"<<" "<<sum_even<<endl;
    cout<<"Sum of Odd Numbers :"<<" "<<sum_odd<<endl;

return 0;

}