#pragma once
#include "NhanVien.h"
class NhanVienVP : public NhanVien
{
protected:
	unsigned soNgayLamViec;
public:
	NhanVienVP();
	NhanVienVP(unsigned soNgayLamViec);
	~NhanVienVP();
	long tinhLuong();
	void nhap();
	void xuat();
};

