#include "book.h"
#include <iomanip>
#include <iostream>
#include "struct.h"
#include <algorithm>
#include "data.h"

#define WIDE 6
void draw_header();
void draw_row(const Sach &value);
void output_Sach(const Sach &a)
{
    std::cout << std::setfill('-') << std::setw(62) << "\n";
    std::cout << std::setfill(' ') << std::left << std::setw(12) << "\n| type";
    std::cout << std::left << std::setw(12) << "| name";
    std::cout << std::left << std::setw(12) << "| author";
    std::cout << std::left << std::setw(12) << "| code";
    std::cout << std::left << std::setw(12) << "| number";
    std::cout << "|";

    std::cout << std::setw(61) << std::setfill('-') << '\n';
    std::cout << std::setw(61) << std::setfill('-') << '\n';
    draw_row(a);
}

void print_Sach(const Sach &a, int index)
{
    draw_header();
    for (int i = 0; i < index; i++)
    {
        draw_row(get_Sach(i));
    }
}

void draw_row(const Sach &value)
{
    std::cout << std::setfill(' ');
    std::cout << "\n| " << std::left << std::setw(9) << value.getType();
    std::cout << "| " << std::left << std::setw(10) << value.getName();
    std::cout << "| " << std::left << std::setw(10) << value.getAuthor();
    std::cout << "| " << std::left << std::setw(10) << value.getCode();
    std::cout << "| " << std::left << std::setw(10) << value.getNum();
    std::cout << "|";
    std::cout << std::setw(61) << std::setfill('-') << '\n';
    std::cout.clear();
}

void draw_header()
{
    std::cout << '+' << std::setw(60) << std::setfill('-') << "+\n";
    std::cout << std::setfill(' ') << std::left << std::setw(11) << "| type";
    std::cout << std::left << std::setw(12) << "| name";
    std::cout << std::left << std::setw(12) << "| author";
    std::cout << std::left << std::setw(12) << "| code";
    std::cout << std::left << std::setw(12) << "| number";
    std::cout << "|";
    std::cout << std::setw(61) << std::setfill('=') << '\n';
    std::cout.clear();
}