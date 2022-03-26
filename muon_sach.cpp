#include <iostream>
#include "muon_sach.h"
#include "condition.h"
#include "searching.h"
#include "phieu_muon.h"
#include "data.h"

void muon_sach(Sach &hire, phieu_muon &cu)
{
    hire.getCode() = search(hire);
    for (int i = 0; i < STORAGE; i++)
    {
        if (hire.getCode() == get_Sach(i).getCode())
        {
            int num;
            std::cout << "\n\nnhap so luong Sach muon muon:\t";
            std::cin >>num;
            hire.setNum(num);
            if (hire.getNum() <= get_Sach(i).getNum() && hire.getNum() > 0)
            {
               condition_input_codeMuon(cu);
                set_Sach(i, hire);
                cu.soluong = hire.getNum();
                cu.phieu.author = get_Sach(i).getAuthor();
                cu.phieu.type = get_Sach(i).getType();
                cu.phieu.name = get_Sach(i).getName();
                cu.phieu.code = get_Sach(i).getCode();
                output_phieuMuon(cu);
                std::cout << "so luong Sach con lai:\t" << get_Sach(i).getNum() << "\n\n";
                set_phieu_muon(i, cu);
            }
            else
            {
                std::cout << "\nso luong k hop le" << '\n';
            }
        }
    }
}