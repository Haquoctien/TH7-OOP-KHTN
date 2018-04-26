#pragma once
#include <string>
#include "Date.h"
class NhanVien
{
protected:
	string name;
	Date dateOfBirth;
public:
	NhanVien();
	NhanVien(string, Date);
	virtual ~NhanVien();
	virtual long tinhLuong()=0;
	virtual void nhap();
	virtual void xuat();
};

