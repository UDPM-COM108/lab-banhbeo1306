#include<stdio.h>
int main(){
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
        scanf(" %d",&lc);
switch (lc)
{
case 1:
    printf("\nChức năng Kiểm tra số nguyên ");
    break;
case 2:
    printf("\nchức năng Tìm Ước số chung và bội số chung của 2 số");
    break;
case 3:
    printf("\nChức năng tính tiền cho quán Karaoke");
    break;
case 4:
     printf("\n4 - Tính tiền điện");
     break;
case 5:
    printf("\n5 - Chức năng đổi tiền");
    break;
case 6:
    printf("\n6 - Xây dựng chức năng tính lãi suất vay ngân hàng vay trả góp");
    break;
case 7:
    printf("\n7 - Xây dựng chương trình vay tiền mua xe");
    break;
case 8:
    printf("\n8 - Sắp xếp thông tin sinh viên");
    break;
case 9:
    printf("\n9 - Xây dựng game FPOLY-LOTT (2/15)");
    break;
case 10:
    printf("\n10 - Xây dựng chương trình tính toán phân số");
    break;
default:printf("Vui long nhap cac chu so o tren menu.");
    break;
}
} while (lc!=0);
return 0;
}