// stringInReverse.cpp
// 0836901 8/25/25

#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

string trim(const string& strIn) {
    string trimmed_s = strIn;
    // Trim leading whitespace
    trimmed_s.erase(trimmed_s.begin(), std::find_if(trimmed_s.begin(),
    trimmed_s.end(), [](unsigned char ch) {
    return !std::isspace(ch);
    }));
    // Trim trailing whitespace
    trimmed_s.erase(std::find_if(trimmed_s.rbegin(), trimmed_s.rend(), [](unsigned
    char ch) {
    return !std::isspace(ch);
    }).base(), trimmed_s.end());
    return trimmed_s;
}


int main()
{
    // Pt 1
    cout<<"Hi"<<endl;
    string ddt = "Long Long Man Sakeru Gummy";
    cout<<ddt<<endl;



    //ranges::reverse(ddt);
    reverse(ddt.begin(), ddt.end());

    cout << "\nMy reversed string is: " << ddt << endl;

    // Pt 2
    for (int i = 0; i < 10; i++) {
        cout << "\nthe value of i is " << i << "\n";
    }
    string easyStreet = "  Ke ke ke ke ke ke ke  ";

    int strlength = easyStreet.length();

    cout << "\nThe length of my string is:" << strlength << endl;
    cout << easyStreet.length() << endl;
    string shortStreet = trim(easyStreet);
    cout << shortStreet.length() << endl;

    cout << "\n\nshortStreet is: " << shortStreet << "\n\n";

    //String functions from warm up

    string test1 = "abcdefghi";
    cout << test1 << endl;
    cout << "size: " << test1.size() << endl;
    cout << "test1[1]: " << test1[1] << endl;
    cout << "test1.at(0)" << test1.at(0) << endl;
    test1[2] = 'C';
    cout << test1 << endl;

    test1 = test1 + "jklmnop";
    test1 += "qrstu";
    test1.append("vwxyz");
    cout << test1 << endl;

    cout << "length: " << test1.length() << endl;

    string test2 = "123";
    string test3;
    test3 = test1 + test2;

    cout << "test3: " << test3 << endl;

    if (test3.empty()) cout << "test3 is empty" << endl;
    else cout << "test3 is not empty" << endl;

    test3.clear();
    cout << "test3: " << test3 << endl;

    if (test3.empty()) cout << "test3 is empty" << endl;
    else cout << "test3 is not empty" << endl;

    string test4 = to_string(-10.5);
    cout << test4 << endl;

    double number = stod(test4);
    cout << "number: " << number << endl;

    string test5 = "A test string";
    string sub = test5.substr(2,4);
    cout << "sub: " << sub << endl;

    string name;
    cout << "Enter name: ";
    getline(cin, name);
    cout << name << endl;



    return 0;
}