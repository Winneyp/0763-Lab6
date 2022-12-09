#include<iostream>
using namespace std;

int number;
int oddNumber;
int evenNumber;

int main(){
    while (true)
    {
        cout << "Enter an integer: ";
        cin >> number;
        if (number==0){
            break;
        }else if(number%2 == 0){
            evenNumber ++;
        }else{
            oddNumber ++;
        }
    }
    

    cout << "#Even numbers = " << evenNumber << "\n";
    cout << "#Odd numbers = "<< oddNumber << "\n";
    return 0;
}
