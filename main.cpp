#include <iostream>
#include "library.h"
#include "data.h"
#include "book.h"

int main()
{
   //   system("cls");
   book a;
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
   
}