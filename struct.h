#ifndef _STRUCT_H_
#define _STRUCT_H_

#include <string>

struct book
{
    std::string type;
    std::string name;
    std::string author;
    std::string code;
    int num;
};

struct phieu_muon
{
    std::string ten;
    std::string dia_chi;
    std::string code_muon;
    int soluong;
    book phieu;
};

#endif