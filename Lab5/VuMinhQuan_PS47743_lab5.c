#include <stdio.h>
// Hàm tìm số lớn nhất
int giatrimax(int so1, int so2, int so3)
{   int max = so1;

    if (so2 > max)
    {
        max = so2;
    }

    if (so3 > max)
    {
        max = so3;
    }
    return max;
}
// Hàm tính năm nhuận
int checkyear(int year)
{   if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//Hàm hoán vị
void hoanvi(int *a, int *b)
{   int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    //Gọi hàm tính max    
    int a, b, c;
    printf("nhap so 1: ");
    scanf("%d", &a);
    printf("nhap so 2: ");
    scanf("%d", &b);
    printf("nhap so 3: ");
    scanf("%d", &c);
    printf("gia tri lon nhat la %d",giatrimax(a,b,c));
    //Gọi hàm tính năm nhuận
    int nam;
    printf("\nnhap nam can kiem tra: ");
    scanf("%d", &nam);
    int dem = checkyear(nam);
    if (dem == 1)
    {
        printf("Nam %d la nam nhuan\n", nam);
    }
    else
    {
        printf("Nam %d khong phai la nam nhuan\n", nam);
    }
    //Gọi hàm hoán vị
    int x,y;
    printf("\nNhap gia tri cua x");
    scanf("%d",&x);
    printf("\nNhap gia tri cua y");
    scanf("%d",&y);
    printf("\ngia tri cua x ban dau la: %d",x);
    printf("\nGia tri cua y ban dau la: %d",y);
    hoanvi(&x, &y);
    printf("\ngia tri cua x sau khi hoanvi la %d",x);
    printf("\ngia tri cua y sau khi hoanvi la: %d",y);
    return 0;
}