#include <stdio.h>
#include <string.h>
struct Nhanvien
{
    int MANV;
    char hoten[50];
    int songaycong;
    int Luongcoban;
};
void nhapthongtinnhanvien(struct Nhanvien ds[], int n)
{
    while (getchar() != '\n')
        ;
    for (int i = 0; i < n; i++)
    {
        printf("Nhap thong tin cua nhan vien thu %d", i + 1);
        printf("\nHo ten");
        gets(ds[i].hoten);
        printf("\nNhap so ngay cong");
        scanf("%d", &ds[i].songaycong);
        while (getchar() != '\n')
            ;
    }
    for (int i = 0; i < n; i++)
    {
        if (ds[i].songaycong == 25)
        {
            ds[i].Luongcoban = 1500000;
        }
        else if (ds[i].songaycong < 25)
        {
            ds[i].Luongcoban = ds[i].songaycong * 60000 * 0.9;
        }
        else
        {
            ds[i].Luongcoban = 1500000 + (ds[i].songaycong - 25) * (1500000 / 25 * 2);
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ds[i].songaycong > ds[j].songaycong)
            {
                struct Nhanvien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
    printf("\n%-25s %-5s %10s", "Ho ten", "So Ngay cong", "Luong");
    for (int i = 0; i < n; i++)
    {
        printf("\n%-25s %-5.2d %15d", ds[i].hoten, ds[i].songaycong, ds[i].Luongcoban);
    }
    
}
int main()
{
    int n;
    printf("Nhap so luong nhan vien");
    scanf("%d", &n);
    struct Nhanvien ds[100];
    nhapthongtinnhanvien(ds, n);
    return 0;
}