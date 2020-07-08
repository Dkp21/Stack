#include <iostream>
#include <string>
#include <cstring>
#include <stack>

using namespace std;

string reverseStringUsingStack(string in)
{
    stack<char> *ch = new stack<char>;

    for(const auto & c : in)
    {
        ch->push(c);
    }

    string out;

    while(!ch->empty())
    {
        out += ch->top();
        ch->pop();
    }

    delete ch;

    return out;
}

int main(int argc, char **argv)
{
    string input;

    cout << "Enter a string : ";

    getline(cin, input);

    cout << "Input string   : " << input << endl;
    cout << "Output string  : " << reverseStringUsingStack(input) << endl;
    
    return 0;
}
