//MUHAMMAD DIDIK WAHYUDI
//20051397040
//MANAJEMEN INFORMATIKA 2020B
#include <stdio.h>
#include <stdlib.h>
void urutan();
int main()
{
 int n;
 printf("MUHAMMAD DIDIK WAHYUDI\n");
 printf("20051397040\n");
 printf("MANAJEMEN INFORMATIKA 2020B\n");
 printf("Input n : ");scanf("%d", &n);
 urutan();
 return 0;
}
void urutan(int i){
 printf("%d\n", i);
 if(i==0)
 return;
 urutan(i-1);
}

