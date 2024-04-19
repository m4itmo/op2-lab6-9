#include <iostream>
#include "predicate.hpp"

using namespace std;

int main() {
    vector<int> sub_5 = {0, 1, 2, 3, 4};
    vector<int> over_5 = {6, 7, 8, 9, 10};

    cout << !anyOf(sub_5.begin(), sub_5.end(), [](int a) { return a > 5; }) << endl;
    cout << !anyOf(sub_5.begin(), sub_5.end(), [](int a) { return a < 5; }) << endl;

    cout << !anyOf(over_5.begin(), over_5.end(), [](int a) { return a < 5; }) << endl;
    cout << !anyOf(over_5.begin(), over_5.end(), [](int a) { return a > 5; }) << endl;

    vector<int> sub_10 = {0, 1, 2, 3, 4};
    vector<int> over_10 = {16, 17, 18, 19, 20};

    cout << !oneOf(sub_5.begin(), sub_5.end(), [](int a) { return a > 5; }) << endl;
    cout << !oneOf(sub_5.begin(), sub_5.end(), [](int a) { return a < 5; }) << endl;

    cout << !oneOf(over_5.begin(), over_5.end(), [](int a) { return a < 5; }) << endl;
    cout << !oneOf(over_5.begin(), over_5.end(), [](int a) { return a > 5; }) << endl;


    vector<int> palindrome1 = {1, 2, 3, 2, 1};
    vector<int> palindrome2 = {1, 2, 3, 3, 2, 1};
    vector<int> not_palindrome1 = {1, 2, 3, 4, 1};
    vector<int> not_palindrome2 = {1, 2, 3, 4, 2, 1};


    cout << is_palindrome(palindrome1.begin(), palindrome1.end(), [](int a, int b) { return a == b; }) << endl;
    cout << is_palindrome(palindrome2.begin(), palindrome2.end(), [](int a, int b) { return a == b; }) << endl;

    cout << is_palindrome(not_palindrome1.begin(), not_palindrome1.end(), [](int a, int b) { return a == b; }) << endl;
    cout << is_palindrome(not_palindrome2.begin(), not_palindrome2.end(), [](int a, int b) { return a == b; }) << endl;


    return 0;
}
 