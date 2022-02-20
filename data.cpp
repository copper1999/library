#include "data.h"

// biến global chỉ xuất hiện và chỉ dùng ở file này thì mình đặt là static, tương tự với hàm nhé!
// ví dụ biến save_muon

static phieu_muon *save_muon = new phieu_muon[PEOPLE];

 phieu_muon get_phieu_muon(int index) // ham nay lay gia tri o vi tri index
{
    return save_muon[index];
}

// minh can ham de set gia tri o vi tri index
void set_phieu_muon(int index, const phieu_muon &value)
{
    save_muon[index] = value;
}
void change_phieu_muon(int index, const phieu_muon &value)
{
    save_muon[index].soluong -= value.soluong;
}

 static book *libraries = new book[STORAGE]{
        {"tin", "c++", "author1", "code1", 10},
        {"toan", "name2", "author2", "code2", 10},
        {"van", "name3", "author3", "code3", 10},
        {"tin", "name4", "author4", "code4", 10},
        {"toan", "name5", "author5", "code5", 10},
        {"van", "name6", "author6", "code6", 10}};
book get_book(int index)
{
    return libraries[index];
}
void set_book(int index,const book &value)
{
    libraries[index].num -= value.num;
}

void change_book(int index,const book &value)
{
    libraries[index].num += value.num;
}

void delete_all()
{
    delete[] libraries;
    delete[] save_muon;
}