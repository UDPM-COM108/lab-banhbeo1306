#include <stdio.h>
#include <string.h>
#include <math.h>

// Hàm kiểm tra số nguyên tố
void kiemtrasonguyento(int a)
{
    int count = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("\n%d LA so nguyen to", a);
    }
    else
    {
        printf("\n%d KHONG PHAI la so nguyen to", a);
    }
}
// Hàm kiểm tra số chính phương
void kiemtrasochinhphuong(int a)
{
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        if (sqrt(a) == i)
        {
            count++;
        }
    }
    if (count == 1)
    {
        printf("\n%.d LA so chinh phuong", a);
    }
    else
    {
        printf("\n%d KHONG PHAI so chinh phuong", a);
    }
}
// Hàm tìm UCLB
void timUCLN(int a, int b)
{
    int min = (a < b) ? a : b;
    int ucln = 1;
    for (int i = min; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            ucln = i;
            break;
        }
    }
    printf("UCLN cua %d va %d la %d", a, b, ucln);
}
// Tìm BCNN
void timBCNN(int a, int b)
{
    int BCNN;
    int max = (a > b) ? a : b;
    for (int i = max;; i += max)
    {
        if (i % a == 0 && i % b == 0)
        {
            max = i;
            break;
        }
    }
    printf("\nBCNN cua %d va %d la %d", a, b, max);
}
// Tính tiền karaoke
float tinhkaraoke(int a, int b)
{
    int sogiohat = b - a;
    float tongtien = 0;
    if (sogiohat <= 3)
    {
        tongtien = sogiohat * 150000;
    }
    else
    {
        tongtien = 3 * 150000 + ((sogiohat - 3) * 150000 * 0.7);
    }
    if (a > 14 && a < 17)
    {
        tongtien = tongtien * 0.9;
    }
    return tongtien;
}
// Tính tiền điện
float tinhtiendien(int a)
{
    int tongtien;
    if (a < 50)
    {
        tongtien = a * 1678;
    }
    else if (a <= 100)
    {
        tongtien = 50 * 1678 + (a - 50) * 1734;
    }
    else if (a <= 200)
    {
        tongtien = 50 * 1678 + 50 * 1734 + (a - 100) * 2014;
    }
    else if (a <= 300)
    {
        tongtien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (a - 200) * 2536;
    }
    else if (a <= 400)
    {
        tongtien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (a - 300) * 2834;
    }
    else
    {
        tongtien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (a - 400) * 2927;
    }
    return tongtien;
}
// Hàm đếm số tờ tiền
void demtien(int a)
{
    int menhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int soLuong[9];

    for (int i = 0; i < 9; i++)
    {
        soLuong[i] = a / menhGia[i];
        a = a % menhGia[i];
    }
    for (int i = 0; i < 9; i++)
    {
        if (soLuong[i] > 0)
        {
            printf("Menh gia %d: %d to\n", menhGia[i], soLuong[i]);
        }
    }
}
// Hàm tính lãi suất
void tinhlaisuat(double a)
{
    double gocphaitra = a / 12;
    double laiphaitra = 0;
    double sotienconlai = a;
    double sotienphaitra = 0;

    for (int i = 1; i <= 12; i++)
    {
        laiphaitra = sotienconlai * 0.05;
        sotienphaitra = gocphaitra + laiphaitra;
        sotienconlai -= gocphaitra;
        printf("\n%-10d %-15.0f %-15.0f %-15.0f %-15.0f", i, laiphaitra, gocphaitra, sotienphaitra, sotienconlai);
    }
}
// Hàm tính lãi suất vay mua xe
int vaytienxe(int soptvay)
{
    double tienvaymax = 500000;
    int nam = 24, thang = 24 * 12;
    double sotienlai;
    printf("So tien tra ban dau la %.3f", tienvaymax - (tienvaymax * soptvay / 100.0));
    double sotienconlai = tienvaymax - (tienvaymax - (tienvaymax * soptvay / 100.0));
    double sogocphaitra = sotienconlai / thang;
    double sotienphaitra;
    printf("\n%-5s %-20s %-20s %- 20s", "So tien con lai", "so tien lai", "So tien phai tra", "Thang");
    for (int i = 1; i <= thang; i++)
    {
        sotienlai = sotienconlai * 0.006;
        sotienphaitra = sogocphaitra + sotienlai;
        sotienconlai -= sogocphaitra;
        printf("\n%-20.0f %-20.0f %-17.0f %d", sotienconlai, sotienlai, sotienphaitra, i);
    }
    return 0;
}
// Nhập dữ liệu sinh viên
struct Sinhvien
{
    char hoten[50];
    float diem;
    char hocLuc[50];
};
void Nhapthongtinsinhvien(struct Sinhvien ds[], int n)
{
    while (getchar() != '\n')
        ;
    for (int i = 0; i < n; i++)
    {
        printf("Nhap thong tin sinh vien thu %d\n", i + 1);
        printf("Ho ten: ");
        gets(ds[i].hoten);
        printf("Diem ");
        scanf("%f", &ds[i].diem);
        while (getchar() != '\n')
            ;
        if (ds[i].diem >= 9)
        {
            strcpy(ds[i].hocLuc, "Xuat sac");
        }
        else if (ds[i].diem >= 8)
        {
            strcpy(ds[i].hocLuc, "Gioi");
        }
        else if (ds[i].diem >= 6.5)
        {
            strcpy(ds[i].hocLuc, "Kha");
        }
        else if (ds[i].diem >= 5)
        {
            strcpy(ds[i].hocLuc, "Trung Binh");
        }
        else
        {
            strcpy(ds[i].hocLuc, "Yeu");
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ds[i].diem < ds[j].diem)
            {
                struct Sinhvien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
    printf("\n%-25s %-5s %10s", "Ho ten", "Diem", "Hoc Luc");
    for (int i = 0; i < n; i++)
    {
        printf("\n%-25s %-5.2f %10s", ds[i].hoten, ds[i].diem, ds[i].hocLuc);
    }
}

int main()
{
    int lc;
    do
    {
        printf("\n__________________________________________");
        printf("\n           MENU CHƯƠNG TRÌNH");
        printf("\n1 - Kiểm tra số nguyên");
        printf("\n2 - Tìm Ước số chung và bội số chung của 2 số");
        printf("\n3 - Chương trình tính tiền cho quán Karaoke");
        printf("\n4 - Tính tiền điện");
        printf("\n5 - Chức năng đổi tiền");
        printf("\n6 - Xây dựng chức năng tính lãi suất vay ngân hàng vay trả góp");
        printf("\n7 - Xây dựng chương trình vay tiền mua xe");
        printf("\n8 - Sắp xếp thông tin sinh viên");
        printf("\n9 - Xây dựng game FPOLY-LOTT (2/15)");
        printf("\n10 - Xây dựng chương trình tính toán phân số");
        printf("\n0 - Thoát MENU");
        printf("\nNhap lua chon cua ban: ");
        scanf(" %d", &lc);
        switch (lc)
        {
        case 1:
            float a;
            printf("\nChức năng Kiểm tra số nguyên ");
            printf("\nNhap vao 1 so bat ky: ");
            scanf("%f", &a);
            if (a != (int)a)
            {
                printf("\n%.3fKhong phai la so nguyen", a);
                printf("\n%.3fKhong phai la so nguyen to", a);
                printf("\n%.3fKhong phai la so chinh phuong", a);
            }
            else
            {
                printf("\n%.3fLa so nguyen", a);
                kiemtrasonguyento(a);
                kiemtrasochinhphuong(a);
            }

            break;
        case 2:
            printf("\nchức năng Tìm Ước số chung và bội số chung của 2 số");
            int s1, s2;
            printf("\nNhap so thu nhat ");
            scanf("%d", &s1);
            printf("\nNhap so thu hai ");
            scanf("%d", &s2);
            timUCLN(s1, s2);
            timBCNN(s1, s2);
            break;
        case 3:
            printf("\nChức năng tính tiền cho quán Karaoke");
            int start, end;
            do
            {
                printf("\nNhap gio bat dau");
                scanf("%d", &start);
                printf("\nNhap gio ket thuc");
                scanf("%d", &end);
                if (start < 12 || end > 23 || end <= start)
                {
                    printf("Gio hoat dong khong hop le! Vui long nhap lai (12h-23h).\n");
                }
            } while (start < 12 || end > 23 || end <= start);
            printf("Tong tien cua quy khach la %.2f", tinhkaraoke(start, end));
            break;
        case 4:
            printf("\n4 - Tính tiền điện");
            int sodien;
            printf("\nNhap so dien ");
            scanf("%d", &sodien);
            printf("So tien dien cua quy khach la %.2f", tinhtiendien(sodien));
            break;
        case 5:
            printf("\n5 - Chức năng đổi tiền");
            int sot;
            printf("\nNhap so tien: ");
            scanf("%d", &sot);
            demtien(sot);
            break;
        case 6:
            printf("\n6 - Xây dựng chức năng tính lãi suất vay ngân hàng vay trả góp");
            double sotien;
            printf("\nNhap so tien muon vay ");
            scanf("%lf", &sotien);
            tinhlaisuat(sotien);
            break;
        case 7:
            printf("\n7 - Xây dựng chương trình vay tiền mua xe");
            int soptvay;
            printf("\nNhap so phan tram vay: ");
            scanf("%d", &soptvay);
            vaytienxe(soptvay);
            break;
        case 8:
            printf("\n8 - Sắp xếp thông tin sinh viên");
            int n;
            printf("\nNhap so luong sinh vien ");
            scanf("%d", &n);
            struct Sinhvien ds[100];
            Nhapthongtinsinhvien(ds, n);
            break;
        case 9:
            printf("\n9 - Xây dựng game FPOLY-LOTT (2/15)");
            break;
        case 10:
            printf("\n10 - Xây dựng chương trình tính toán phân số");
            break;
        default:
            printf("Vui long nhap cac chu so o tren menu.");
            break;
        }
    } while (lc != 0);
    return 0;
}