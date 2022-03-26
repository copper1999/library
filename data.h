#ifndef _DATA_H
#define _DATA_H
#include "struct.h"
#include "sach.h"

#define STORAGE 6
#define PEOPLE 10

phieu_muon *delete_phieu();
Sach *delete_Sach();
phieu_muon get_phieu_muon(int index);
void set_phieu_muon(int index, const phieu_muon &value);
const Sach& get_Sach(int index);
void set_Sach(int index,const Sach &value);
void change_Sach(int index,const Sach &value);
void change_phieu_muon(int index, const phieu_muon &value);
void delete_all();

#endif
