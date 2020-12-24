#include <stdio.h>

int main(void) {
 int dem;
 for(dem = 2; dem < 11; dem += 2){
 	printf("%d ", dem);
 	}
 	
  return 0;
  }


#include <stdio.h>

int main(void) {
 int tong = 0;
 for(int dem = 1; dem <= 10; dem++){
 	tong = tong + dem;
	 }
	 printf("tong la: %d",tong);
 tong = tong + 1; 
 tong = tong + 2;
 tong = tong + 3;
 tong = tong + 4;

 	
  return 0;
  }
