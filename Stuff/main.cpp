#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <boost/algorithm/string.hpp>
using namespace std;
using namespace boost;

int main()
{
  char question();
  vector<string> input;
  bool response() = true;
  int number() = 0
  while (response = true)
  {
    cout << "Please enter your string.";
    getline(cin, input[number]);
    bool valid() = false;
    {
      cout << "Continue input? [Y/N]"
      getline(cin, question);
      if (question = y) {
        response = true;
        number = number + 1;
        valid = true;
      }
      elseif (question = n) {
        response = false;
        valid = true;
      }
      else {
        cout << "Invalid response, please try again."
      }
    }
  }
