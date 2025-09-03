/* dogMathIsSilly.cpp
0836901 9/3/25 */

#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;
int dog1 = 0;
int dog2 = 0;
int twoDog = 0;
// Input from user
void walkDog() {
    cout << "Time to go for a walk!" << "\nLet's go ";
    cin >> dog1;
    cout << "Hey! I heard another dog barking!" << "It sounds like a ";
    cin >> dog2;
}
// Int(eger) comparator.
void dogWalking() {
    cout << "This other dog..." << endl;
    if (dog1 > dog2) {
        cout << "Is smaller than my dog!" << endl;
    }
    else if (dog1 == dog2) {
        cout << "Is same than my dog!" << endl;
    }
    else {
        cout << "Is bigger than my dog!" << endl;
    }
}
// Sum of int(eger)s.
void twoDogs() {
    twoDog = dog1 + dog2;
    cout << "Combined together, the two dogs become...\n" << twoDog << "Dog!" << endl;
}
// Calling/Invoking all functions.
int main() {

    walkDog();

    dogWalking();

    twoDogs();

    return 0;
}