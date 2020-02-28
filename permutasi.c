#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Program Permutasi \n");
    printf("By : Kelompok 3 Kelas D \n");

    int n, r, a=1, b=1, hasil;
    printf("Masukkan nilai n :");
    scanf("%d", &n);
    printf("Masukkan nilai r :");
    scanf("%d", &r);
    if(r>n)
    {
        printf("Nilai r tidak boleh melebihi n\n");
    }
    else if(r<=n)
    {
      {
        int i;
        for(i=1;i<=n;i++)

        a=i*a;
      }
      {
        int i;
        for(i=1;i<=n-r;i++)

        b=i*b;
      }
      hasil=a/b;
        printf("\nHasil Permutasi dari P(%d,%d)adalah %d", n, r, hasil);
    }

    return 0;
}
