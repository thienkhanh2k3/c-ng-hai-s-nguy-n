#include<stdio.h>
int main(){
    int x,y,dien_tich,chu_vi;
    printf("nhap chieu dai hinh chu nhat:");
    scanf("%d",&x);
    printf("nhap chieu rong hinh chu nhat:");
    scanf("%d",&y);
    chu_vi=(x+y)*2;
    dien_tich=x*y;
    printf("chu vi hinh chu nhat la:%d\n",chu_vi);
    printf("dien tich hinh chu nhat la:%d",dien_tich);
    return 0;
}