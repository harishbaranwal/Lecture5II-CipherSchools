#include <iostream>
using namespace std;

int main(){

    // program for taking 5 input and giving 5 output.

    // int arr[4];
    // cout << "give 5 int as input: ";
    // for(int i=0;i<5;i++){
    //     cin >> arr[i];
    // }

    // cout << "the 5 given inputs are: ";
    // for(int i=0;i<5;i++){
    //     cout << arr[i];
    // }

    // program for giving 10 input and getting output in reverse order. 

    int arr[9];
    cout << "give 10 int as input: ";
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    cout << "the 10 given inputs are: ";
    for(int i=9;i>=0;i--){
        cout << arr[i];
    }

    return 0;
}
