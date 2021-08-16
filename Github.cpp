#include<stdio.h>
void star(int num)
{
    if(num>0)
	{
	printf("*");
	num--;
	star(num);
}
}		
	int main(){
		star(5);
	}
