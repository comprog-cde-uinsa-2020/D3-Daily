#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Program Bilangan Faktorial \n");
    printf("By : Kelompok 3 Kelas D \n");

    int hasil=1, bil;
    printf("Masukkan bilangan faktorial :");
    scanf("%d", &bil);
    int i;
    for(i=1;i<=bil;i++)
    {
        if(i<bil)
        printf("%d x", i);
        else
        printf("%d", i);

        hasil=i*hasil;
    }
    printf("\n\n%d!(%d faktorial)= %d", bil, bil, hasil);
    return 0;
}
