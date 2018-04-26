#include "NhanVienSanXuat.h"
#include "NhanVienVP.h"

int main(void)
{
	cout << "Nhap so nhan vien can quan li: ";
	int n;
	cin >> n;
	cin.ignore();
	NhanVien **danhSachNhanVien = new NhanVien*[n];
	for (int i = 0, ans; i < n; i++)
	{
		cout << "-->Nhap nhan vien thu " << i + 1 << endl;
		cout << "Nhap 1 neu la nhan vien van phong, 0 neu la nhan vien san xuat: ";
		cin >> ans;
		cin.ignore();
		if (ans)
			danhSachNhanVien[i] = new NhanVienVP;
		else
			danhSachNhanVien[i] = new NhanVienSanXuat;
		danhSachNhanVien[i]->nhap();
	}
	cout << "Cac nhan vien da nhap: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\t#" << i + 1 << endl;
		danhSachNhanVien[i]->xuat();
	}
	for (int i = 0; i < n; i++)
	{
		delete danhSachNhanVien[i];
	}
	delete[] danhSachNhanVien;
	system("pause");
	return 0;
}