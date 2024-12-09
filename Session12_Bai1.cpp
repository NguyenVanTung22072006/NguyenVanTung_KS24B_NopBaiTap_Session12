#include<stdio.h>

int tinhtong(int a, int b){
	return a+b;
}

int main(){
	int num1, num2;
	printf("Nhap so thu nhat: ");
	scanf("%d", &num1);
	printf("Nhap so thu hai: ");
	scanf("%d", &num2);
	
	int sum= tinhtong(num1, num2);
	printf("Tong cua %d va %d la: %d", num1, num2, sum);
	
	return 0;
}
