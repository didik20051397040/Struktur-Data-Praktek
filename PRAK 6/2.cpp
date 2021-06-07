//MUHAMMAD DIDIK WAHYUDI
//20051397040
//MANAJEMEN INFORMATIKA 2020B
#include <stdio.h>
#include <stdlib.h>

void urutan();
int main()
{
 int n, x=0;
 
 printf("MUHAMMAD DIDIK WAHYUDI\n");
 printf("20051397040\n");
 printf("MANAJEMEN INFORMATIKA 2020B\n");
 printf("Input n : ");scanf("%d", &n);
 urutan();
 return 0;
}

void urutan(int x,int n){
 printf("%d\n", x);
 if(x==n)
 return;
 urutan(x+1,n);
}

