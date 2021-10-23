#include <iostream>
#include <string>
#include "mai.h"

using namespace std;



int main() {
    CheckBook checkTest(20, 30, 40);
    checkTest.writeCheck(20);
    checkTest.displayChecks();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

