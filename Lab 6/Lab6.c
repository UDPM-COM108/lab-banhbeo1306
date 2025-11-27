#include <stdio.h>
// Hàm tính trung bình cộng các số chia hết cho 3
float tbtchia3(int a[], int n)
{
    int tong = 0, count = 0, tbc = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0)
        {
            tong += a[i];
            count += 1;
        }
    }
    if (count > 0)
    {
        tbc = tong / count;
        return (float)tbc;
    }
    else
    {
        return 0;
    }
}
// Tìm giá trị lớn nhất
int timmax(int a[], int n)
{
    int max;
    max = a[0];
    for (int i = 0; i < n; i++)
    {

        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
// Tìm giá trị nhỏ nhất
int timmin(int a[], int n)
{
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}
// Hàm hoán vị
void hoanvi(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Hàm sắp xếp giảm dần
void sxgiam(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int max = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[max])
            {
                max = j;
            }
        }
        hoanvi(&a[i], &a[max]);
    }
}
// Hàm sắp xếp tăng dần
void sxtangdan(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        hoanvi(&a[i], &a[min]);
    }
}
// Hàm tính bình phương mảng 2 chiều
void tinhbinhphuong(int b[10][10], int bbp[10][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            bbp[i][j] = b[i][j] * b[i][j];
        }
    }
}
// Hàm in mảng
void inmang(int x[10][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3d", x[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int b[10][10];
    int row, col;
    int a[100];
    int n;
    do
    {
        printf("Nhap so phan tu cua mang a[n] 0 < n <=100 ");
        scanf("%d", &n);
    } while (n < 0 || n > 100);
    for (int i = 0; i < n; i++)
    {
        printf("Gia tri cua a[%d]:", i);
        scanf("%d", &a[i]);
    }
    printf("Trung binh tong cac so chia het cho 3 trong mang la %.2f", tbtchia3(a, n));
    printf("\nGia tri lon nhat trong mang la %d", timmax(a, n));
    printf("\nGia tri nho nhat trong mang la %d", timmin(a, n));
    printf("\nSắp xếp theo thứ tự giảm dần ");
    sxgiam(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nSắp xếp theo thứ tự tang dần ");
    sxtangdan(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n________________________________________________________________");
    int bbinhphuong[10][10];
    do
    {
        printf("\nNhap so hang 0 < row < 10 ");
        scanf("%d:", &row);
    } while (row < 0 || row > 10);
    do
    {
        printf("Nhap so cot 0 < col < 10");
        scanf("%d:", &col);
    } while (col > 10 || col < 0);
    printf("Nhap gia tri cac phan tu:");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\nNhap phan tu b[%d][%d]", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    tinhbinhphuong(b, bbinhphuong, row, col);
    inmang(bbinhphuong, row, col);
    return 0;
}