#include <iostream>
#include <vector>
#include <memory>
#include "DVD.cpp"
int main() {
    DVD d(230, "Das_Sterben_der_Kuehe", "93");
    cout << d << endl;
    return 0;
}