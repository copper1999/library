#ifndef _SACH_H
#define _SACH_H

#include <string>
class Sach
{
private:
    std::string m_type;
    std::string m_name;
    std::string m_author;
    std::string m_code;
    int m_num;

public:
    Sach(std::string type="type", std::string name="name", std::string author="author", std::string code="code", int num = 0);

    std::string getType() const;
    std::string getName() const;
    std::string getAuthor() const;
    std::string getCode() const;
    int getNum() const;
    void setType(std::string type);
    void setName(std::string name);
    void setAuthor(std::string author);
    void setCode(std::string code);
    void setNum(int num);
};

class phieu_muon1
{
    private:
    std::string m_ten;
    std::string m_dia_chi;
    std::string m_code_muon;
    int m_soluong;
    Sach m_phieu;

    public:
};
#endif