#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Program Permutasi Siklis \n");
    printf("By : Kelompok 3 Kelas D \n");

    int hasil=1, angka, bil;
    printf("Masukkan nilai n = ");
    scanf("%d", &angka);
    bil=angka-1;
    int i;
    for(i=1;i<=bil;i++)

        hasil=i*hasil;

    printf("\nHasil Permuatasi Siklis dengan n = %d adalah %d", angka, hasil);
    return 0;
}
