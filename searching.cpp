#include <iostream>
#include "searching.h"
#include <string>
#include <limits>
#include "data.h"
#include "book.h"

std::string search_type(Sach a)
{
    std::cout << "enter type: " << '\t';
    std::string type;
    std::cin >> type;
    a.setType(type);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for (int i = 0; i < STORAGE; i++)
    {
        if (get_Sach(i).getType() == a.getType())
        {
            a.setCode(get_Sach(i).getCode());
            output_Sach(get_Sach(i));
        }
    }
    return a.getCode();
}

std::string search_name(Sach a)
{
    std::cout << "enter name: " << '\t';
    std::string name;
    std::cin >> name;
    a.setName(name);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for (int i = 0; i < STORAGE; i++)
    {
        if (get_Sach(i).getName() == a.getName())
        {
            a.setCode(get_Sach(i).getCode());
            std::cout << "\nresult is Sach number " << i + 1 << '\t';
            output_Sach(get_Sach(i));
        }
    }
    return a.getCode();
}

std::string search_author(Sach a)
{
    std::cout << "enter author: " << '\t';
    std::cout << "enter name: " << '\t';
    std::string author;
    std::cin >> author;
    a.setAuthor(author);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for (int i = 0; i < STORAGE; i++)
    {
        if (get_Sach(i).getAuthor() == a.getAuthor())
        {
            a.setCode(get_Sach(i).getCode());
            std::cout << "\nresult is Sach number " << i + 1 << '\t';
            output_Sach(get_Sach(i));
        }
    }
    return a.getCode();
}

std::string search_code(Sach a)
{
    std::cout << "enter code: " << '\t';
     std::cout << "enter name: " << '\t';
    std::string code;
    std::cin >> code;
    a.setCode(code);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for (int i = 0; i < STORAGE; i++)
    {
        if (get_Sach(i).getCode() == a.getCode())
        {
            a.setCode( get_Sach(i).getCode());
            std::cout << "\nresult is Sach number " << i + 1 << '\t';
            output_Sach(get_Sach(i));
        }
    }
    return a.getCode();
}

std::string search(Sach a)
{
    print_Sach(a, STORAGE);
    int option = 0;
    std::cout << "\n(!) => lua chon cah tim kiem\n"
              << "\n1. theo loai Sach \n"
              << "2. theo ten sach\n"
              << "3. theo tac gia\n"
              << "4. theo code \n";
    std::cout << "\nnhap lua chon: \t";
    std::cin >> option;
    system("cls");
    if (option == 1)
    {
        search_type(a);
        std::cout << "\n(!)nhap code Sach :\t" << '\n';
        a.setCode(search_code(a));
    }
    else if (option == 2)
    {
        a.setCode(search_author(a));
    }
    else if (option == 3)
    {
        a.setCode(search_name(a));
    }
    else if (option == 4)
    {
        a.setCode(search_code(a));
    }

    return a.getCode();
}
