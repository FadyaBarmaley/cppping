// g++ 03_cin_example.cpp -o 03_cin_example.o -c && g++ 03_cin_example.o -o 03_cin_example && ./03_cin_example
#include "std_lib_facilities.h"

int main() 
{
  cout << "Введите то, не знаю что :\n";
  string first_name;
  cin >> first_name;
  cout << "А что это тут у нас? Опять написал какую-то непонятицу холоп?\n" 
       << first_name << "\n";
  return 0;
} 