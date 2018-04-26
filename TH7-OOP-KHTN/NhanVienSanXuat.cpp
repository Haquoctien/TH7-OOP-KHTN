#include "NhanVienSanXuat.h"



NhanVienSanXuat::NhanVienSanXuat()
{
	luongCanBan = 0;
	soSanPham = 0;
}

NhanVienSanXuat::NhanVienSanXuat(long luongCanBan, unsigned soSanPham)
{
	this->luongCanBan = luongCanBan;
	this->soSanPham = soSanPham;
}


NhanVienSanXuat::~NhanVienSanXuat()
{
}

long NhanVienSanXuat::tinhLuong()
{
	return luongCanBan * soSanPham * 5000;
}

void NhanVienSanXuat::nhap()
{
	NhanVien::nhap();
	cout << "Nhap luong can ban: ";
	cin >> luongCanBan;
	cout << "Nhap so san pham: ";
	cin >> soSanPham;
	cin.ignore();
}

void NhanVienSanXuat::xuat()
{
	NhanVien::xuat();
	cout << "Luong can ban: " << luongCanBan << endl;
	cout << "So san pham: " << soSanPham << endl;
	cout << "Luong: " << tinhLuong() << endl;
}
