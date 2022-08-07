//g++ 03_01.cpp -o 03_01.o -c && g++ 03_01.o -o 03_01 && ./03_01

#include "std_lib_facilities.h"

int main()
{
  int number_of_words = 0;
  string current;
  string previous = " "; 
  while (cin>>current) 
  {
    ++number_of_words;
    if (previous == current) 
    {
      cout << "Повторение слова " << current
           << " после " << number_of_words << " слов." << "\n";
    }
    else 
    {
     cout << " Совпадений нет" << "\n";
    }
    previous = current;
  }
  return 0;
}
/*

int x = 3;
0 0
1 1
2 10
3 11
xxxxxxxx xxxxxxxx xxxxxxxx xxxxxxxx
00000000 00000000 00000000 00000011
32767
11111111 11111111 11111111 11111111
2^31 + 2^30 + ... + 2^0
1 00000000 00000000 00000000 00000000
2^32

n  2^n
---------------
0  1
1  2
2  4
3  8
4  16
5  32
6  64
7  128
8  256
9  512
10 1024
11 2048
12 4096
13 8192
14 16384
15 32768
16 65536
*/
