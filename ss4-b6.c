#include<stdio.h>
int main(){
	int number1,number2,number3;
	printf("nhap so thu nhat: ");
	scanf("%d", &number1);
	printf("nhap so thu hai: ");
	scanf("%d", &number2);
	printf("nhap so thu ba: ");
	scanf("%d", &number3);
	int max = number1;
	int min = number1;
	if ( max<number2 ){
		max = number2;
		if (max < number3){
			max = number3;
		}
	}
	printf("so lon nhat la: %d",max);
	if (min>number2){
		min = number2;
		if (min>number3){
			min = number3;
		}
	}
	printf("|so nho nhat la: %d",min);

}
