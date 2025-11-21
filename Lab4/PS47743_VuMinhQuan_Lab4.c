#include<stdio.h>
//Ham tinh trung binh tong cac so tu nhien chia het cho 2
float trbinh(int min, int max){
    int i;
    float tong = 0, biendem = 0, trungbinh = 0;
    i = min;
    while (i<=max)
    {   if (i % 2==0)
        {tong +=i;
        biendem ++;}
        i ++;   }
    trungbinh = tong/biendem;
    printf("\ntrung binh tong cua %d va %d chia het cho 2 là : %f", min,max,trungbinh);
    return trungbinh;}

//Ham kiem tra so nguyen to
int songto(int x){
    int uocso = 0, ai ;
    for (ai = 2; ai < x; ai++)
    {if (x % ai == 0)
        {uocso++;}}
    if (uocso==0)
    {printf ("\n%d la so nguyen to", x);}
    else{printf("\n%d khong phai so nguyen to", x);}}

//Ham kiem tra so chinh phuong
int checkscp(int cp){
    int kqua =0;
    for (int y = 0; y < cp ; y++)
   {
    if (y*y==cp)
    {kqua = 1;
    break; }} 
    if (kqua==1)
        {  printf("\n%d la so chinh phuong", cp);}
    else{printf("\n%d khong phai la so chinh phuong", cp);}
}
int main(){
    int lc;
    do
    {
        printf("\n1 - TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2");
        printf("\n2 - XÁC ĐỊNH SỐ NGUYÊN TỐ");
        printf("\n3 - XÁC ĐỊNH SỐ CHÍNH PHƯƠNG");
        printf("\n0 - THOAT");
        printf("\nnhap lua chon cua ban");
        scanf(" %d",&lc);
        switch (lc)
        {
        case 1:
           int min, max;
    printf("nhap min: ");
    scanf("%d", &min);
    printf("Nhap max");
    scanf("%d", &max);
    trbinh(min, max); //goi ham tinh trung binh
    
            break;
        case 2:
        int x;
    printf("\nnhap vao x :");
    scanf("%d",&x); 
    songto(x);  //goi ham kiem tra so nguyen to
    break;
    case 3:
    int cp;
   printf("\nnhap vao x " );
   scanf("%d",&cp);
   checkscp(cp);    //Goi ham kiem tra so chinh phuong
        default:printf("\nvui long nhap 1,2,3,0");
            break;}}
    while (lc != 0);
    
return 0;
}

