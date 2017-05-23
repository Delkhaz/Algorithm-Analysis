#include <iostream>
#include <cmath> // for square root
using namespace std;

bool primeTest ( int n) { // test if n is prime
        // loop untill square root of n
        for (int i = 2; i < sqrt(n); i++){
                if (n % i == 0){
                // if ther n is divisible by i then its not prime
                        return false;
                }
        }

        return true;

}

int main (void) {
        int n;
        cout << "Enter value for n "      << endl;
        cin  >> n;

        // check if n is prime or not
        if ( primeTest(n))
                cout << "n is prime "     << endl;
        else
                cout << "n is not prime " << endl;

return 0;

}
