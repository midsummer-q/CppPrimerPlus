//
// Created by midsummer-q on 2022/3/30.
//
//uses and displays a variable
#include <iostream>

int main() {
    using namespace std;

    int carrots;

    carrots = 25;
    cout << "I hava ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;

    return 0;
}
