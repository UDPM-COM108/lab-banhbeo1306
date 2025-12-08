#include <stdio.h>
#include <string.h>
// Hàm tính nguyên âm phụ âm
void tinhnguyenphuam(char a[])
{
    int i = 0;
    int j = 0;
    int p = 0;
    while (a[i++] != '\0')
    {
        if (a[i] == 'a' || a[i] == 'i' || a[i] == 'e' || a[i] == 'u' || a[i] == 'o')
        {
            j++;
        }
        else
        {
            p++;
        }
    }
    printf("chuoi '%s'co chua %d nguyen am va %d phu am", a, j, p);
}
// Hàm kiểm tra đăng nhập
void kiemtradangnhap(char user[], int pass)
{
    char usernamesys[] = "Banhbeo";
    int passsys = 1306;
    if (strcmp(user, usernamesys) == 0 && pass == passsys)
    {
        printf("Dang nhap thanh cong");
    }
    else
    {
        printf("Dang nhap that bai\n");
        printf("Dang nhap that bai vui long kiem tra lai username hoac password");
    }
}
// Hàm swap
void swap(char a[], char b[])
{
    char temp[100];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

int main()
{ // gọi hàm tính nguyên âm phụ âm
    char a[100];
    printf("Nhap vao chuoi: ");
    gets(a);
    tinhnguyenphuam(a);
    // gọi hàm kiểm tra user and pass
    char user[100];
    int pass;
    printf("\nVui long nhap username cua ban: ");
    gets(user);
    printf("Vui long nhap password cua ban: ");
    scanf("%d", &pass);
    kiemtradangnhap(user, pass);
    char s[5][20];
    while (getchar() != '\n')
        ;
    for (int i = 0; i < 5; i++)
    {
        printf("\nNhap chuoi thu %d: ", i + 1);
        gets(s[i]);
    }
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (strcmp(s[j - 1], s[j]) > 0)
            {
                swap(s[j - 1], s[j]);
            }
        }
    }
    printf("Chuỗi sắp xếp theo thứ tự bảng chữ cái\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s", s[i]);
        printf("\n");
    }

    return 0;
}