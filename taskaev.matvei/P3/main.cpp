#include <iostream>
#include "formingString.hpp"
#include "readingString.hpp"
#include "findRplSym.hpp"

int main()
{
  char * string = nullptr;
  char simbolOld = 'c';
  char simbolNew = 'b';
  int size = 5;
  int newSize = 5;
  try
  {
    string = taskaev::readingString(std::cin, size, newSize);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << "\n";
    delete[] string;
    return 1;
  }
  std::cout << taskaev::findRplSym(string, simbolOld, simbolNew) << "\n";
  delete[] string;
  return 0;
}

