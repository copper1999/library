#ifndef _DATA_H
#define _DATA_H
#include "struct.h"

#define STORAGE 6
#define PEOPLE 10

phieu_muon *delete_phieu();
book *delete_book();
phieu_muon get_phieu_muon(int index);
void set_phieu_muon(int index, const phieu_muon &value);
book get_book(int index);
void set_book(int index,const book &value);
void change_book(int index,const book &value);
void change_phieu_muon(int index, const phieu_muon &value);
void delete_all();
#endif
