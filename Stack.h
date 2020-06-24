#include <iostream>
#include <vector>
#include <cassert>

template <class T>
class MyStack
{
    public:
        MyStack(size_t n = 256)
        {
            stack_size = n;
            std::cout << "Creating stack with " << n << " elements" << std::endl;

            stack.resize(n);
            index = -1;

        }

        ~MyStack()
        {
            std::cout << "Destroying stack" << std::endl;
        }
        
        bool isStackEmpty()
        {
            return (index == -1);
        }

        bool isStackFull()
        {
            return (stack_size == (index + 1));
        }

        bool myStackPush(const T & item)
        {
            if(!isStackFull())
            {
                ++index;
                stack.at(index) = item;

                return true;
            }

            return false;
        }

        bool myStackPop(void)
        {
            if(!isStackEmpty())
            {
                --index;
                return true;
            }

            return false;
        }

        T myStackTop()
        {
            assert(!isStackEmpty());
                
            return stack.at(index);
        }

    private:
        std::vector<T> stack;
        size_t stack_size;
        int index;
};
