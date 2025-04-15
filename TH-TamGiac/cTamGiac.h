#ifndef CTAMGIAC_H
#define CTAMGIAC_H

#include "cDiem.h"
#include <string>
using namespace std;

#pragma once

class TamGiac: public Diem {
private:
    Diem A;
    Diem B;
    Diem C;

public:
    TamGiac();
    TamGiac(const Diem& A, const Diem& B, const Diem& C);
    ~TamGiac();
    void Nhap();
    void Xuat();
    string KiemTraLoai();
    double TinhChuVi();
    double TinhDienTich();
    void TinhTien(double dx, double dy);
    void Quay(int alpha);
    void PhongTo(double scaleUp);
    void ThuNho(double scaleDown);
};

#endif