#include <iostream>
#include "ClassCustomVectore.h"

int main() {
    ClassCustomVectore<int> _vectore(5);
    _vectore.pushBack(1);
    //    _vectore.pushBack(3);
//
    _vectore.printValue(0);
    return 0;
}