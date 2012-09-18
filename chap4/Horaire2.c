// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

static void annoncerUnVol (const char v[], const char h[]) 
{
   printf("Le vol en direction de ");
   printf("%s",v);
   printf(" décolera à ");
   printf("%s",h);
   printf("\n");
   printf("-----------------------------------------------\n");
   printf("\n");
}

int main()
{
   annoncerUnVol("Tokyo","9h00");
   annoncerUnVol("Sydney","9h30");
   annoncerUnVol("Toulouse","9h45");
}
