#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    FILE *dosya;
    //KARAKTER OLARAK ALMA
    /*char karakter;
    if((dosya=fopen("C:\\Users\\murat\\Desktop\\C DERSLERÝ\\Dosya Ýþlemleri\\yazilarokuma.txt","r")) != NULL) {
        karakter = fgetc(dosya);
        while (karakter != EOF) {
            printf("%c",karakter);
            karakter = fgetc(dosya);
        }
    }
    else{
        printf("Dosya sistemde bulunamadý...");
    }*/
    //STRING OLARAK ALMA
    /*char karakter[30];
    if((dosya=fopen("C:\\Users\\murat\\Desktop\\C DERSLERÝ\\Dosya Ýþlemleri\\yazilarokuma.txt","r")) != NULL) {
        fgets(karakter,250,dosya);
        puts(karakter);
    }
    else{
        printf("Dosya sistemde bulunamadý...");
    }*/
    //SCANF ILE ALMA
    char kelimeler[50][50];
    int index = 0;
    if((dosya=fopen("C:\\Users\\murat\\Desktop\\C DERSLERÝ\\Dosya Ýþlemleri\\yazilarokuma.txt","r")) != NULL) {
        while(!feof(dosya)){
            fscanf(dosya,"%s",&kelimeler[index]);
            printf("%s\n",kelimeler[index]);
            index++;
        }
    }
    else{
        printf("Dosya sistemde bulunamadý...");
    }
    return 0;
}
