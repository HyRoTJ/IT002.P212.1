#include "cTamGiac.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

TamGiac::TamGiac() : A(), B(), C() {}

TamGiac::TamGiac(const Diem& a, const Diem& b, const Diem& c) : A(a), B(b), C(c) {}

void TamGiac::Nhap() {
    cout << "Nhap diem A: ";
    A.Nhap();
    cout << endl;
    cout << "Nhap diem B: ";
    B.Nhap();
    cout << endl;
    cout << "Nhap diem C: ";
    C.Nhap();
    cout << endl;
}

void TamGiac::Xuat() {
    cout << "Diem A: ";
    A.Xuat();
    cout << "Diem B: ";
    B.Xuat();
    cout << "Diem C: ";
    C.Xuat();
}

TamGiac::~TamGiac() {}

string TamGiac::KiemTraLoai() {
    double AB = A.TinhKhoangCach(B);
    double AC = A.TinhKhoangCach(C);
    double BC = B.TinhKhoangCach(C);

    if (AB + AC <= BC || AB + BC <= AC || AC + BC <= AB) {
        return "Khong phai tam giac"; 
    }

    if (fabs(AB - AC) < 1e-6 && fabs(AC - BC) < 1e-6) {
        return "Tam giac deu"; 
    }

    if (fabs(AB - AC) < 1e-6 || fabs(AB - BC) < 1e-6 || fabs(AC - BC) < 1e-6) {
        if (fabs(AB * AB + AC * AC - BC * BC) < 1e-6 || 
            fabs(AB * AB + BC * BC - AC * AC) < 1e-6 || 
            fabs(AC * AC + BC * BC - AB * AB) < 1e-6) {
            return "Tam giac vuong can";
        }
        return "Tam giac can"; 
    }

    if (fabs(AB * AB + AC * AC - BC * BC) < 1e-6 || 
        fabs(AB * AB + BC * BC - AC * AC) < 1e-6 || 
        fabs(AC * AC + BC * BC - AB * AB) < 1e-6) {
        return "Tam giac vuong"; 
    }

    return "Tam giac thuong"; 
}

double TamGiac::TinhChuVi() {
    return A.TinhKhoangCach(B) + A.TinhKhoangCach(C) + B.TinhKhoangCach(C);
}

double TamGiac::TinhDienTich() {
    double AB = A.TinhKhoangCach(B);
    double AC = A.TinhKhoangCach(C);
    double BC = B.TinhKhoangCach(C);
    double p = (AB + AC + BC) / 2;
    return sqrt(p * (p - AB) * (p - AC) * (p - BC));
}

void TamGiac::TinhTien(double dx, double dy) {
    A.TinhTien(dx, dy);
    B.TinhTien(dx, dy);
    C.TinhTien(dx, dy);
}

void TamGiac::Quay(int alpha) {
    A.Quay(alpha);
    B.Quay(alpha);
    C.Quay(alpha);
}

void TamGiac::PhongTo(double scaleUp) {
    A.PhongTo(scaleUp);
    B.PhongTo(scaleUp);
    C.PhongTo(scaleUp);
}

void TamGiac::ThuNho(double scaleDown) {
    if (scaleDown == 0) {
        cout << "Error: scaleDown cannot be 0." << endl;
        return;
    }
    A.ThuNho(scaleDown);
    B.ThuNho(scaleDown);
    C.ThuNho(scaleDown);
}