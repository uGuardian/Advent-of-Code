#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string input;
    cout << "Input here:";
    getline (cin, input);
    
    size_t up = count(input.begin(), input.end(), '(');
    size_t down = count(input.begin(), input.end(), ')');
    int out = up - down;
    
    cout << "The answer is " << out;
}