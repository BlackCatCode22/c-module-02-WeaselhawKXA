// Created by BE129 on 8/20/2025.
// addTwoInts.cpp
// 0836901
// This program will get three ints from the user and output the largest one.
#include <iostream>

using namespace std;

int main() {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int hiNum = 0;
    //int loNum = 0;
    //int mdNum = 0;
    int sumOFNums = 0;
    cout << "Enter a value for num1:";
    cin >> num1;
    cout << "Enter a value for num2:";
    cin >> num2;
    cout << "Enter a value for num3:";
    cin >> num3;

    sumOFNums = num1 + num2 + num3;

    cout << "\nThe sum of " << num1 << ", " << num2 << ", and " << num3 << " is " << sumOFNums;

    if (sumOFNums > 0) {
        cout << "\nThe sum, " << sumOFNums << ", is positive.";
    }
    else if (sumOFNums < 0) {
        cout << "\nThe sum, " << sumOFNums << ", is negative.";
    }

    //cout << "\n The largest number is " << hiNum;
    //cout << "\n The smallest number is " << loNum;
    //cout << "\n" << mdNum << " sits in the middle";

    if (num1 > num2) {
        cout << "\n" << "num1 is greater than num2";
        if (num1 > num3) {
            hiNum = num1;
            cout << "\n" << "num1 is greater than num3";
            //loNum = num2;
            //mdNum = num3;
        }
    }
    else {
        if (num2 > num3) {
        hiNum = num2;
        cout << "\n" << "num2 is greater than num3";
        //loNum = num1;
        //mdNum = num3;
        }
        else {
            hiNum = num3;
            cout << "\n" << "num3 is greater than num2";
            //if (num2 > num1) {
                //mdNum = num2;
                //loNum = num1;
            //if (num1 > num2) {
                //mdNum = num1;
                //loNum = num2;

            //}
            //}
        }
    }

    cout << "\n" << hiNum << " is the largest number!";
    //cout << "\n" << loNum << " is the smallest number!";
    //cout << "\n" << mdNum << " is the middlemost number!";
    //if (num1 and num2 < num3)


    //if (num1 > num2) {
        //if (num1 > num3) {
            //hiNum = num1;
            //cout << "\n" << "num1 is greater than num2";
        //}
    //}
    //else {
        //cout << "\n" << num2 << " is greater than " << num1;
    //}

    return 0;

}