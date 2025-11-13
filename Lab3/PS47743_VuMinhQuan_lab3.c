#include <stdio.h>
#include <math.h>
int main(){
    char lc;
    
    do
    {
    printf("\n1 - CHƯƠNG TRÌNH TÍNH HỌC LỰC\n");
    printf("2 - Giải Phương trình bậc 1\n");
    printf("3 - Giải Phương trình bậc 2\n");
    printf("x - Thoat\n");
    printf("Nhap lua chon cua ban\n");
    scanf("%c",&lc);
    switch (lc)
    {
    case '1':
        printf("Chuc nang tinh hoc luc\n");
        float dtb;
        printf("Nhap diem trung binh cua sinh vien: ");
        scanf("%f",&dtb);
    if (dtb>=9)
    {
        printf("Hoc luc xuat sac");
    }
    else {if (dtb >=8)
    {
        printf("Hoc luc gioi\n");
    }
        else{if (dtb>=6.5)
    {
        printf("Hoc luc kha\n");
    }       else{if (dtb >=5)
    {
        printf("Hoc luc trung binh\n");
    }           else{if (dtb >=3.5)
    {
        printf("Hoc luc yeu\n");
    }else{printf("hoc luc kem\n");}
                    }
                }
            }
        }
        break;
        case '2':
        printf("\nChuc nang Giải Phương trình bậc 1 ");
        float a, b, nghiem;
           printf ("nhap so a:");
           scanf("%f",&a);
           printf("\nNhap so b:");
           scanf("%f", &b);
           if (a==0)
           {
            if (b==0)
            {
                printf ("\nphuong tinh vo so ngiem");
            }
            else {
                printf("\nphuong trinh vo nghiem");
                }
            
            }
           else {
            nghiem = -b/a;
            
            printf("\nPhuong tinh co nghiem: %2f", nghiem);
            
                }
        break;        
        case'3':
        printf("\nChuc nang giai phuong trinh bac 2");
        float c, ng, ng1,ng2, delta, ngkep;
    printf("\nnhap so a: ");
    scanf("%f",&a);
    printf("\nnhap so b: ");
    scanf("%f",&b);
    printf("\nnhap so c: ");
    scanf("%f",&c);
    if (a==0)
    {
        if (b==0)
           {
            if (c==0)
            {
                printf ("\nphuong tinh vo so ngiem");
            }
            else {
                printf("\nphuong trinh vo nghiem");
            }
            
            }
           else {
            ng = -c/b;
            
            printf("\nPhuong tinh co nghiem: %f", ng);
            
    }
    }
    else{ 
        delta = b*b-4*a*c;
        if (delta>0)
        {
            ng1 = (-b + sqrt(delta))/(2*a);
            ng2 = (-b - sqrt(delta))/(2*a);
            printf("\nPhuong trinh co 2 nghiem phan biet %f va %f",ng1,ng2);
        }
        else{
            if (delta==0)
            {
                ngkep = -b/(2*a);
                printf("\nphuong trinh co nghiem kep%f", ngkep);
            }
            else{
                printf("phuong trinh vo nghiem\n");
                }
            }
         
        }
    
    default: printf("\nVui long nhap 1,2,3 hoac x");
        break;
    }
    
    } while (lc != 'x');
    return 0;
}
