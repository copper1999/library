#include "sach.h"
#include <string>

Sach::Sach(std::string type, std::string name, std::string author, std::string code, int num)
{
    setType(type);
    setName(name);
    setAuthor(author);
    setCode(code);
    setNum(num);
}

std::string Sach::getType() const
{
    return m_type;
}

std::string Sach::getName() const
{
    return m_name;
}

std::string Sach::getAuthor() const
{
    return m_author;
}

std::string Sach::getCode() const
{
    return m_code;
}

 int Sach::getNum() const
{
    return m_num;
}

void Sach::setType(std::string type)
{
    m_type = type;
}

void Sach::setName(std::string name)
{
    m_name = name;
}

void Sach::setAuthor(std::string author)
{
    m_author = author;
}

void Sach::setCode(std::string code)
{
    m_code = code;
}

void Sach::setNum(int num)
{
    m_num = num;
}