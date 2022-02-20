#include <iostream>
#include "searching.h"
#include <string>
#include <limits>
#include "data.h"
#include "book.h"

std::string search_type(book a)
{
    std::cout << "enter type: " << '\t';
    std::cin >> a.type;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for (int i = 0; i < STORAGE; i++)
    {
        if (get_book(i).type == a.type)
        {
            a.code = get_book(i).code;
            output_book(get_book(i));
        }
    }
    return a.code;
}

std::string search_name(book a)
{
    std::cout << "enter name: " << '\t';
    std::cin >> a.name;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for (int i = 0; i < STORAGE; i++)
    {
        if (get_book(i).name == a.name)
        {
            a.code = get_book(i).code;
            std::cout << "\nresult is book number " << i + 1 << '\t';
            output_book(get_book(i));
        }
    }
    return a.code;
}

std::string search_author(book a)
{
    std::cout << "enter author: " << '\t';
    std::cin >> a.author;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for (int i = 0; i < STORAGE; i++)
    {
        if (get_book(i).author == a.author)
        {
            a.code = get_book(i).code;
            std::cout << "\nresult is book number " << i + 1 << '\t';
            output_book(get_book(i));
        }
    }
    return a.code;
}

std::string search_code(book a)
{
    std::cout << "enter code: " << '\t';
    std::cin >> a.code;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for (int i = 0; i < STORAGE; i++)
    {
        if (get_book(i).code == a.code)
        {
            a.code = get_book(i).code;
            std::cout << "\nresult is book number " << i + 1 << '\t';
            output_book(get_book(i));
        }
    }
    return a.code;
}

std::string search(book a)
{
    print_book(a, STORAGE);
    int option = 0;
    std::cout << "\n(!) => lua chon cah tim kiem\n"
              << "\n1. theo loai sach \n"
              << "2. theo ten sach\n"
              << "3. theo tac gia\n"
              << "4. theo code \n";
    std::cout << "\nnhap lua chon: \t";
    std::cin >> option;
    system("cls");
    if (option == 1)
    {
        search_type(a);
        std::cout << "\n(!)nhap code sach :\t" << '\n';
        a.code = search_code(a);
    }
    else if (option == 2)
    {
        a.code = search_author(a);
    }
    else if (option == 3)
    {
        a.code = search_name(a);
    }
    else if (option == 4)
    {
        a.code = search_code(a);
    }

    return a.code;
}
