// Q.4. WAP to print Hollow Square Pattern. Take integer value n from user. If n = 4, then it
// should print the pattern as follows :
// * * * *
// *     *
// *     *
// * * * *


#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter value of n " << "\n";
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            // cout << "*";
            if(i == 0 || i == n-1 || j == 0 || j == n-1 ){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << "\n";
    }


}