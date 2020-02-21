#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Program Keliling Persegi Panjang \n");
    printf("By : Kelompok 3 Kelas D \n");

    int panjang;
    int lebar;
    int keliling;

    printf("Masukkan panjang =");
    scanf("%d", &panjang);
    printf("Masukkan lebar =");
    scanf("%d", &lebar);

    keliling=2*(panjang+lebar);

    printf("Keliling persegi panjang = %d", keliling);
    return 0;
}
