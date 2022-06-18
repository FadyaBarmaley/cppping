// g++ -O2 -c hello_world.cpp -o hello_world.o && g++ hello_world.o -o hello_world && ./hello_world ; echo $?
#include "std_lib_facilities.h"

int main() // Программы C++ начинаются с выполнения функции main
{
  cout << "Hello, World!\n";  // Вывод "Hello, World!"
  return 0;
}
