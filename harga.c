#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char jenis[10];
    int harga;
    int hari;

    printf("masukan jenis barang:");
    scanf("%s",&jenis);
    printf("masukan lama waktu:");
    scanf("%d", &hari);
    if(strcmp(jenis,"elektronik")==0){
        harga=12000*hari;
        printf("%d", harga);
    } else if(strcmp(jenis,"non-elektronik")==0){
        harga=8000*hari;
        printf("%d", harga);
    } else{
        printf("jenis salah");
    }
    return 0;
}
