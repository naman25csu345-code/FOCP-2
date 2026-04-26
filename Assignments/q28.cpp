#include<iostream>
using namespace std;    

int main(){
    int arr[5];
    int even = 0, odd = 0;

    cout << "Enter 5 integers:" << endl;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0){
            even+=arr[i];
        } else {
            odd+=arr[i];
        }
    }
    cout << "Sum of even integers: " << even << endl;
    cout << "Sum of odd integers: " << odd << endl;
    return 0;
}