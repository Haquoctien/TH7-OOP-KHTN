#pragma once
#include "NhanVien.h"
class NhanVienSanXuat : public NhanVien
{
protected:
	long luongCanBan;
	unsigned soSanPham;
public:
	NhanVienSanXuat();
	NhanVienSanXuat(long luongCanBan, unsigned soSanPham);
	~NhanVienSanXuat();
	long tinhLuong();
	void nhap();
	void xuat();
};

