# 5g++ main.cpp book.cpp condition.cpp data.cpp library.cpp muon_sach.cpp phieu_muon.cpp sach.cpp searching.cpp tra_sach.cpp -std=c++1z -o day15;.\day1
$list_files = @(Get-ChildItem -Path *.cpp | Select Name)
g++ $list_files.Name -o day15.exe
./day15.exe