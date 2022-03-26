#include <iostream>
#include "library.h"
#include "data.h"
#include "book.h"
#include "sach.h"

void printTest();
int main()
{
     system("cls");
   Sach a;
   do
   {
     char action='y';
     library();
     std::cout << "\nb muon tiep o lai thu vien k ?\n" << "y - yes\n" <<"n - no\n";
     std::cin >> action;
     if (action == 'y')
     {
        continue;
     }
     else break;
   } while (1);
   // Sach sach1("doanh");
   // Sach sach2 = sach1;
   // std::cout << sach2.getType() << '\n';

}
