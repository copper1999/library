#include <iostream>
#include "library.h"
#include "searching.h"
#include "muon_sach.h"
#include "tra_sach.h"
#include "data.h"

enum
{
    E_SEARCHING = 1,
    E_MUON_SACH = 2,
    E_TRA_SACH = 3

};
void library()
{
    phieu_muon a;
    book b;
        bool c=true;
        int options = 0;
        std::cout << "lua chon thao tac :" << '\n'
                  << "\n\t1. tim kiem sach\n"
                  << "\t2. muon sach\n"
                  << "\t3. tra sach\n"
                  << "\t4. thoat\n";
        std::cout << '\n'
                  << "nhap thao tac :\t";
        std::cin >> options;
        std::cout << "\n------------------------------------\n";
        // system("cls");
        switch (options)
        {
        case E_SEARCHING:
        {
            std::cout << "*|:=> bat dau thuc hien tim kiem <=: *\n"
                      << '\n';
            search(b);
            break;
        }
        case E_MUON_SACH:
        {
            std::cout << "*|:=> bat dau thuc hien muon sach <=: *\n"
                      << '\n';
            muon_sach(b, a);
            break;
        }
        case E_TRA_SACH:
        {
            std::cout << "*|:=> bat dau thuc hien tra sach <=: *\n"
                      << '\n';
            tra_sach(a);
            break;
        }
        default:
        {
            std::cout << "XIN CAM ON" << '\n';
            break;
        }
        }
       
    delete_all();
}