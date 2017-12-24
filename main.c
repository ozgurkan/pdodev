#include <stdio.h>
#include <stdlib.h>
#define uzunluk 1000

int MetinUzunlukBul(char a[]){
    int i=0;
        while(a[i]!='\0'){
        i=i+1;
        }
    return i;
}


int main()
{
    char Metin1[uzunluk],Metin2[uzunluk];
    int  Metin1Uzunluk=0, Metin2Uzunluk=0;
    printf("1.kelimeyi giriniz:");
    scanf("%s",&Metin1);

    printf("2.kelimeyi giriniz:");
    scanf("%s",&Metin2);

    Metin1Uzunluk=MetinUzunlukBul(Metin1);
    Metin2Uzunluk=MetinUzunlukBul(Metin2);

    int a,i,j,n,m,eslesmesayisi=0;
    int kontrol;
        if(Metin2Uzunluk<Metin1Uzunluk){
            for(a=0;a<(Metin1Uzunluk-Metin2Uzunluk)+1;a++){
            kontrol=1;
            m=0;
            n=a;
            while(m<Metin2Uzunluk){
                if(Metin1[n]==Metin2[m]){
                  kontrol=kontrol*1;
                }else{
                  kontrol=kontrol*0;
                }
                m++;
                n++;
                }
                if(kontrol==1){
                        eslesmesayisi++;
                    printf("eslesme var 1.metinde %d.harften %d.harfe kadar",(n-m)+1,(n-m)+Metin2Uzunluk);
                    printf("\n");
                }
            }
            if(eslesmesayisi==0){
                printf("hicbir eslesme bulunamadi.");
            }else{
                printf("%d tane eslesme bulundu.",eslesmesayisi);
            }
        }
        else if(Metin1Uzunluk<Metin2Uzunluk){
            for(a=0;a<(Metin2Uzunluk-Metin1Uzunluk)+1;a++){
            kontrol=1;
            m=0;
            n=a;
            while(m<Metin1Uzunluk){
                if(Metin2[n]==Metin1[m]){
                  kontrol=kontrol*1;
                }else{
                  kontrol=kontrol*0;
                }
                m++;
                n++;
                }
                if(kontrol==1){
                        eslesmesayisi++;
                    printf("eslesme var 2.metinde %d.harften %d.harfe kadar",(n-m)+1,(n-m)+Metin1Uzunluk);
                    printf("\n");
                }
            }
            if(eslesmesayisi==0){
                printf("hicbir eslesme bulunamadi.");
            }else{
                printf("%d tane eslesme bulundu.",eslesmesayisi);
            }
        }
        else if(Metin1Uzunluk==Metin2Uzunluk){
            kontrol=1;
            for(i=0;i<Metin1Uzunluk;i++){
                 if(Metin1[i]==Metin2[i]){
                  kontrol=kontrol*1;
                }else{
                  kontrol=kontrol*0;
                }
            }
            if(kontrol==1){
                    printf("\n girilen kelimeler aynidir.");
                }else{
                    printf("\n eslesme bulunamadi.");
                }
        }
    return 0;
}
