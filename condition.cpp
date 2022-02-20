#include <iostream>
#include <limits>
#include "condition.h"
#include "phieu_muon.h"

void condition_input_codeMuon(phieu_muon &a)
{

    input_phieu(a);
    do
    {
        bool condition = true;
        std::cout << "code muon sach" << '\n';
        getline(std::cin, a.code_muon);
        for (int i = 0; i < PEOPLE; i++)
        {
            if (a.code_muon == get_phieu_muon(i).code_muon)
            {
                std::cout << "\ncode muon k hop le moi nhap lai (^_^)";
                condition = false;
            }
        }
        if (condition == false)
        {
            continue;
        }
        else
            break;

    } while (1);
}

int condition_TRA_SACH(phieu_muon &a)
{
    int index = 0;
    do
    {
        bool condition = true;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "code muon sach" << '\n';
        getline(std::cin, a.code_muon);
        for (int i = 0; i < PEOPLE; i++)
        {
            if (a.code_muon == get_phieu_muon(i).code_muon)
            {
                index = i;
                break;
            }
            else
            {
                condition = false;
                std::cout << "\ncode muon k hop le moi nhap lai (^_^)";
            }
        }
        if (condition == false)
        {
            continue;
        }
        else
            output_phieuMuon(get_phieu_muon(index));
        break;

    } while (1);
    return index;
}
