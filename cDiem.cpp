#include "cDiem.h"
#include <iostream>
#include <cmath>
using namespace std;

Diem::Diem() {
    x = 0;
    y = 0;
}
Diem::Diem(double x, double y) {
    this->x = x;
    this->y = y;
}
Diem::Diem(const Diem& A) {
    x = A.x;
    y = A.y;
}
Diem::~Diem() {}

void Diem::Nhap() {
    cout << "Nhap toa do x: ";
    cin >> x;
    cout << "Nhap toa do y: ";
    cin >> y;
}
void Diem::Xuat() {
    cout << "(" << x << "," << y << ")" << endl;
}
double Diem::TinhKhoangCach(Diem A) const {
    return sqrt(pow(x - A.x, 2) + pow(y - A.y, 2));
}
void Diem::TinhTien(double dx, double dy) {
    x += dx;
    y += dy;
}
void Diem::Quay(int alpha) {
    double rad = alpha * M_PI / 180.0; 
    double xNew = x * cos(rad) - y * sin(rad);
    double yNew = x * sin(rad) + y * cos(rad);
    x = xNew;
    y = yNew;
}
void Diem::PhongTo(double scaleUp) {
    x *= scaleUp;
    y *= scaleUp;
}
void Diem::ThuNho(double scaleDown) {
    if (scaleDown == 0) {
        cout << "Error: scaleDown cannot be 0." << endl;
        return;
    }
    x /= scaleDown;
    y /= scaleDown;
}