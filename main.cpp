#include <iostream>
#include "ClassCustomVectore.h"

int main() {
    ClassCustomVectore<int> _vectore(1);
    _vectore.pushBack(1);
    _vectore.pushBack(2);
    _vectore.pushBack(3);
    _vectore.pushBack(4);
    _vectore.pushBack(5);

    _vectore.printValue(4);
    return 0;
}