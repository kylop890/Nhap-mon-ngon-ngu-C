#include <stdio.h>
int main(){
	//khai bao bien  
  int a = 2, b = 2;
  char pt;
  printf ("vui long nhap phep tinh ");
  scanf ("%c",&pt);
  switch(pt) {
     case '+':
	 printf (" a + b = %d",a +b);
     break;
  	 case '-':
	 printf (" a - b = %d",a -b);
     break;
     default:
     printf(" nhap cong hoac tru ");
     printf("Vui long nhap phep tinh ");
  }
  return 0;
}
