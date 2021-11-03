#include<stdio.h>
int main(){
    float r,dien_tich,chu_vi,pi=3.14;
    printf("nhap ban kinh hinh tron:");
    scanf("%f",&r);
    chu_vi=(2*pi*r);
    dien_tich=(pi*(r*r));
    printf("chu vi hinh tron la:%f\n",chu_vi);
    printf("dien tich hinh tron la:%f",dien_tich);
    return 0;
}