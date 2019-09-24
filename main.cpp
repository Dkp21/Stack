#include <iostream>
#include "Stack.h"

int main(int argc, char **argv)
{
	MyStack<int> *my_stack = new MyStack<int>(10);

	std::cout << "Empty(False(0)/True(1))? " << my_stack->is_empty() << std::endl;

	int a = 10;

	my_stack->push(a);
	my_stack->push(++a);
	my_stack->push(++a);
	my_stack->push(++a);
	my_stack->push(++a);

	std::cout << "Top " << my_stack->top() << std::endl;
	my_stack->pop();
	std::cout << "Empty(False(0)/True(1))? " << my_stack->is_empty() << std::endl;

	std::cout << "Top " << my_stack->top() << std::endl;
	my_stack->pop();
	std::cout << "Empty(False(0)/True(1))? " << my_stack->is_empty() << std::endl;

	std::cout << "Top " << my_stack->top() << std::endl;
	my_stack->pop();
	std::cout << "Empty(False(0)/True(1))? " << my_stack->is_empty() << std::endl;

	std::cout << "Top " << my_stack->top() << std::endl;
	my_stack->pop();
	std::cout << "Empty(False(0)/True(1))? " << my_stack->is_empty() << std::endl;

	std::cout << "Top " << my_stack->top() << std::endl;
	my_stack->pop();
	std::cout << "Empty(False(0)/True(1))? " << my_stack->is_empty() << std::endl;

	return 0;
}
