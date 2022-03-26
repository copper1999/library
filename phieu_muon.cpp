#include <iostream>
#include <limits>
#include <iomanip> 
#include "phieu_muon.h"
#include "data.h"

void input_phieu(phieu_muon &a)
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "input ten" << '\n';
    getline(std::cin, a.ten);
    std::cout << "dia chi nguoi muon" << '\n';
    getline(std::cin, a.dia_chi);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
void output_phieuMuon(const phieu_muon &a)
{

    std::cout << std::setw(61) << std::setfill('-') << '\n';
    std::cout << std::left << std::setw(25) << "\n\tten nguoi muon sach" <<": "<< a.ten << '\n';
    std::cout << std::left << std::setw(25) << "\n\tdia chi nguoi muon" <<": "<< a.dia_chi << '\n';
    std::cout << std::left << std::setw(25) << "\n\tkieu sach" <<": "<< a.phieu.type << '\n';
    std::cout << std::left << std::setw(25) << "\n\tten sach" <<": "<< a.phieu.name << '\n';
    std::cout << std::left << std::setw(25) << "\n\tten tac gia" <<": "<< a.phieu.author << '\n';
    std::cout << std::left << std::setw(25) << "\n\tma sach" <<": "<< a.phieu.code << '\n';
    std::cout << std::left << std::setw(25) << "\n\tso luong Sach muon" <<": "<< a.soluong << '\n';
    std::cout << std::left << std::setw(25) << "\n\tma muon sach" <<": "<< a.code_muon << "\n\n";
}