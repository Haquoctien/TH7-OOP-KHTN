#include "NhanVienVP.h"



NhanVienVP::NhanVienVP()
{
}

NhanVienVP::NhanVienVP(unsigned soNgayLamViec)
{
	this->soNgayLamViec = soNgayLamViec;
}


NhanVienVP::~NhanVienVP()
{
}

long NhanVienVP::tinhLuong()
{
	return soNgayLamViec * 100000;
}

void NhanVienVP::nhap()
{
	NhanVien::nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> soNgayLamViec;
	cin.ignore();
}

void NhanVienVP::xuat()
{
	NhanVien::xuat();
	cout << "Loai nhan vien: nhan vien van phong" << endl;
	cout << "So ngay lam viec: " << soNgayLamViec << endl;
	cout << "Luong " << tinhLuong() << " vnd" << endl;
}
