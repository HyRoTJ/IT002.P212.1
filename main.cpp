#include <iostream>
#include "cTamGiac.h"

int main() {
    TamGiac tg;

    // Input the triangle's vertices
    cout << "Nhap toa do 3 dinh cua tam giac:" << endl;
    tg.Nhap();

    // Output the triangle's vertices
    cout << "Toa do tam giac vua nhap:" << endl;
    tg.Xuat();

    // Determine the type of triangle
    cout << "Loai tam giac: " << tg.KiemTraLoai() << endl;

    // Calculate and display the perimeter
    cout << "Chu vi tam giac: " << tg.TinhChuVi() << endl;

    // Calculate and display the area
    cout << "Dien tich tam giac: " << tg.TinhDienTich() << endl;

    // Translate the triangle
    double dx, dy;
    cout << "Nhap phan tu di chuyen dx: ";
    cin >> dx;
    cout << "Nhap phan tu di chuyen dy: ";
    cin >> dy;
    tg.TinhTien(dx, dy);

    // Output the translated triangle
    cout << "Toa do tam giac sau khi di chuyen:" << endl;
    tg.Xuat();

    // Scale the triangle up
    double scaleUp;
    cout << "Nhap he so phong to: ";
    cin >> scaleUp;
    tg.PhongTo(scaleUp);

    // Output the scaled-up triangle
    cout << "Toa do tam giac sau khi phong to:" << endl;
    tg.Xuat();

    // Scale the triangle down
    double scaleDown;
    cout << "Nhap he so thu nho: ";
    cin >> scaleDown;
    tg.ThuNho(scaleDown);

    // Output the scaled-down triangle
    cout << "Toa do tam giac sau khi thu nho:" << endl;
    tg.Xuat();

    // Rotate the triangle
    int alpha;
    cout << "Nhap goc quay (do): ";
    cin >> alpha;
    tg.Quay(alpha);

    // Output the rotated triangle
    cout << "Toa do tam giac sau khi quay:" << endl;
    tg.Xuat();

    return 0;
}