#include <stdio.h>

void Biodata(int tahunLahir, char Namaku[], char Asal[]){
int tahun_sekarang = 2020;

printf("Perkenalkan Nama Saya : %s\n", Namaku);
printf("Umur saya : %d \n", tahun_sekarang - tahunLahir);
printf("Saya Adalah Angkatan  : %d\n", tahun_sekarang);
printf("Asal Saya dari : %s", Asal);
}

int main() {
int tahunLahir;
char Namaku[20], Asal[15];
scanf(" %d",&tahunLahir); 
getchar();
scanf(" %[^\n]%*c", Namaku); 
scanf(" %[^\n]%*c", Asal);
Biodata(tahunLahir, Namaku, Asal);
return 0; }