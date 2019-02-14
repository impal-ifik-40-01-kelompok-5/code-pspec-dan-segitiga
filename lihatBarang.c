#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    char jenis[10];
    int harga;
    int hari;
    char lihat[10];
    bool kon=false;

    printf("masukan jenis barang:");
    scanf("%s",&jenis);
    printf("masukan lama waktu:");
    scanf("%d", &hari);
    if(strcmp(jenis,"elektronik")==0){
        harga=12000*hari;
        printf("%d", harga);
        kon=true;
    } else if(strcmp(jenis,"non-elektronik")==0){
        harga=8000*hari;
        printf("%d", harga);
        kon=true;
    } else{
        printf("jenis salah");
    }
    printf("\n");

    printf("Lihat barang yang sudah masuk : ");
    scanf("%s",&lihat);

    if((kon==true)||(strcmp(lihat,"elektronik")==0)||(strcmp(lihat,"non-elektronik")==0)){
       printf("Barang %s sudah masuk dengan harga Rp.%d ",jenis,harga);
       } else {
       printf("Barang Belum Masuk");
       }
    return 0;
}
