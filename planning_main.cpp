#include<iostream>
#include"process.h"
using std::cout , std::endl;

int main() {
    cout << "planning start" << endl;
    Process pro;
    pro.planProcess();
    cout << "planning end" << endl;

    return 0;
}
// #include"Test.h"
// void Test::T() {
//     cout << "Test successfully!" << endl;
// }
// int main() {
//     Test tt;
//     tt.T();
//     return 0;
// }