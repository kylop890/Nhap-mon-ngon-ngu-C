#include <stdio.h>
int main(){
	//Khai bao bien
  char pt;
  int thang;
  printf ("vui long moi ban nhap thang vao may tinh ");
  scanf ("%d",&thang);
  switch(thang) 
  {
    case1:
    printf("30 ngay");
      break;
    case 2: 
	 	printf ("28 ngay");
      break;
    case 3: 
	 	printf ("31 ngay"); 
	  break;
	case 4: 
	 	printf ("30 ngay");
      break;
	case 5: 
	 	printf ("31 ngay");
      break;
	case 6: 
	 	printf ("30 ngay");
      break;
	case 7: 
	 	printf ("31 ngay");
      break;
	case 8: 
	 	printf ("31 ngay");
      break;
	case 9: 
	 	printf ("30 ngay");
      break;
	case 10: 
	 	printf ("31 ngay");
      break;
	case 11: 
	 	printf ("30 ngay");
      break;
	case 12: 
	 	printf ("31 ngay");
      break;
	   default:     	  		 
  	}
  //Xuat ket qua 
  return 0;
}
