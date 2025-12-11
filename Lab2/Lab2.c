//BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
#include <stdio.h>
int main(){
    float a,b,tong,hieu;
    printf("nhap so x ");
    scanf("%f", &a);
    printf("nhap so y: ");
    scanf("%f", &b);
    tong = a+b;
    hieu = a-b;
    printf("tong cua 2 so: %f", tong);
     printf("\nhieu cua 2 so: %f", hieu);


//BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
    float CD,CR,chuvi,dientich;
    printf("nhap chieu dai cua HCN:");
    scanf("%f", &CD);
    printf("nhap chieu rong cua HCN:");
    scanf("%f", &CR);
    chuvi = (CD+CR)*2;
    dientich = CD*CR;
    printf("chu vi HCN la: %f", chuvi);
    printf("dien tich HCN la: %f", dientich);


//BÀI 3: TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
    const float PI = 3.14;
    float r, s, c ;
    printf("nhap ban kinh hinh tron r :");
    scanf("%f", &r);
    s = r * r * PI;
    printf("dien tich hinh tron la: %f",s);
    chuvi = r * 2 *PI;
    printf("\nchu vi hinh tron la: %f", c);

    //BÀI 4 TÍNH ĐIỂM TRUNG BÌNH
    float toan, ly, hoa, diemtb;
    printf("nhap diem toan: ");
    scanf("%f", &toan);
    printf("nhap diem ly: ");
    scanf("%f", &ly);
    printf("nhap diem hoa: ");
    scanf("%f", &hoa);
    diemtb = (toan * 3 + ly * 2 + hoa)/6;
    printf("diem trung binh la: %f", diemtb);


      // BAIF 5 TINHS CHU VI DIỆN TÍCH HÌNH TAM GIÁC
    float cgv1,cgv2,canhhuyen,cv,dt;
    printf("Nhap canh 1 :");
    scanf("%f", &cgv1);
    printf("Nhap canh 2 :");
    scanf("%f", &cgv2);
    printf("Nhap canh huyen :");
    scanf("%f", &canhhuyen);
    cv = cgv1 + cgv2 + canhhuyen;
    dt = (cgv1*cgv2)/2;
    printf ("chuvi= %f", cv);
    printf("dien tich la %f", dt);
     return 0;

   


}



