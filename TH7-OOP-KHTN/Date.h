#pragma once
#include <iostream>
using namespace std;
bool isDate(int, int, int);
class Date
{
private:
	int day, month, year;
public:
	Date();
	Date(int, int, int);
	~Date();
	void nhap();
	void xuat() const;
};