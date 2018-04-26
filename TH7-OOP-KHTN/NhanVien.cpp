#include "NhanVien.h"



NhanVien::NhanVien()
{
	this->name = "Chua nhap...";
}

NhanVien::NhanVien(string name, Date dateOfBirth)
{
	this->name = name;
	this->dateOfBirth = dateOfBirth;
}


NhanVien::~NhanVien()
{
}

void NhanVien::nhap()
{
	cout << "Nhap ten nhan vien: ";
	getline(cin, name);
	dateOfBirth.nhap();
}

void NhanVien::xuat()
{
	cout << "Ten nhan vien: " << name << endl;
	cout << "Ngay thang nam sinh: ";
	dateOfBirth.xuat();
}
