#include <iostream>
#include "Stack.h"

void getBinaryOfNumber(unsigned n)
{
    MyStack<int> stack(256);

    unsigned temp = n;

    while(n > 0)
    {
        int a = n % 2;
        n = n/2;
        stack.myStackPush(a);
    }

    std::cout << "Decimal - " << temp << " = Binary - ";

    while(!stack.isStackEmpty())
    {
        std::cout << stack.myStackTop();
        stack.myStackPop();
    }

    std::cout << "\n";
}

int main(int argc, char **argv)
{
    getBinaryOfNumber(1024);
    getBinaryOfNumber(-1);
    return 0;
}
