#ifndef CDIEM_H
#define CDIEM_H

using namespace std;

#pragma once

class Diem {
    protected:    
        double x; 
        double y;
    
    public:
        Diem();
        Diem(double x, double y);
        Diem(const Diem& A);
        ~Diem();
    
        double GetX() const { return x; }
        double GetY() const { return y; }
        void SetX(double value) { x = value; }
        void SetY(double value) { y = value; }
    
        void Nhap();
        void Xuat();
        double TinhKhoangCach(Diem A) const;
        void TinhTien(double dx, double dy);
        void Quay(int alpha);
        void PhongTo(double scaleUp);
        void ThuNho(double scaleDown);
    };

#endif