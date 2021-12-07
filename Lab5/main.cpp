#include <iostream>
#include "MyVector.h"

int main(void) {
    MyVector<int> v;
    int var = 1;
    v.push_back(var);
    v.push_back(2);
    while (!v.isEmpty()) std::cout << v.pop_back() << " ";
    std::cout << std::endl;
    v.push_back(1);
    v.push_back(2);
    std::cout << v[1] << " ";
    std::cout << v[0] << std::endl;
    MyVector<int> b = v;
    b.push_back(19);
    b[1] = 10;
    std::cout << b.at(1) << endl;
    for(unsigned int i = 0; i < 20; i++)
        b.push_back(i);
    while (!b.isEmpty())
        std::cout << b.pop_back() << " ";
    return 0;
}