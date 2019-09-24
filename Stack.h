#include <iostream>
#include <string>
#include <vector>
#include <cstdint>

#ifndef __STACK_H__
#define __STACK_H__

template<typename T>
class MyStack
{
	public:
		MyStack(int sz) : stack_limit(sz)
		{
			st.resize(sz);
			mytop = -1;
		};

		bool push(const T & x)
		{
			if(mytop >= stack_limit)
				return false;

			st[ ++mytop] = x;

			return true;
		};

		void pop(void)
		{
			if(!is_empty())
				--mytop;
		};

		T top(void) const
		{
			if(!is_empty())
				return st[mytop];

			return -1;
		};

		bool is_empty(void) const
		{
			return (mytop <= -1);
		}

	private:
		std::vector<T> st;
		int stack_limit;
		int mytop;
};


#endif // __STACK_H__
