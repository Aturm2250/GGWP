#include <stdio.h>
void star(int num) {
  for (int x = 1; x <= num; x++){
    for (int y = 1; y <= num; y++) {
      if (x == 1 || y == 1 || x == num || y == num)
        printf("*");
      else
        printf(" ");
    }
    	printf("\n");
	}
      num--;
    }
int main() {
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    int x;
    int y;
    int z;
    star(num);
  }
