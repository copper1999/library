#include "book.h"
#include <iomanip>
#include <iostream>
#include "struct.h"
#include <algorithm>
#include "data.h"
#define WIDE 6
void draw_header();
void draw_row(const book &value);
void output_book(const book &a)
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

void print_book(const book &a, int index)
{
    draw_header();
        for (int i = 0; i < index; i++)
        {
            draw_row(get_book(i));
        }
    
  
}

void draw_row(const book &value)
{
    std::cout << std::setfill(' ');
    std::cout << "\n| " << std::left << std::setw(9) << value.type;
    std::cout << "| " << std::left << std::setw(10) << value.name;
    std::cout << "| " << std::left << std::setw(10) << value.author;
    std::cout << "| " << std::left << std::setw(10) << value.code;
    std::cout << "| " << std::left << std::setw(10) << value.num;
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