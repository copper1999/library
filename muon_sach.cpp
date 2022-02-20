#include <iostream>
#include "muon_sach.h"
#include "condition.h"
#include "searching.h"
#include "phieu_muon.h"
#include "data.h"

void muon_sach(book &hire, phieu_muon &cu)
{
    hire.code = search(hire);
    for (int i = 0; i < STORAGE; i++)
    {
        if (hire.code == get_book(i).code)
        {
            std::cout << "\n\nnhap so luong sach muon muon:\t";
            std::cin >> hire.num;
            if (hire.num <= get_book(i).num && hire.num > 0)
            {
               condition_input_codeMuon(cu);
                set_book(i, hire);
                cu.soluong = hire.num;
                cu.phieu.author = get_book(i).author;
                cu.phieu.type = get_book(i).type;
                cu.phieu.name = get_book(i).name;
                cu.phieu.code = get_book(i).code;
                output_phieuMuon(cu);
                std::cout << "so luong sach con lai:\t" << get_book(i).num << "\n\n";
                set_phieu_muon(i, cu);
            }
            else
            {
                std::cout << "\nso luong k hop le" << '\n';
            }
        }
    }
}