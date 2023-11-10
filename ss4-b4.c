
#include<stdio.h>
int main(){
	int year;
	printf("nhap nam: ");
	scanf("%d", &year);
	int month;
	printf("nhap thang: ");
	scanf("%d", &month);
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("thang co 31 ngay");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("thang co 30 ngay");
			break;
		case 2:
			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                printf("Thang 2 co 29 ngay") ;
            } else {
                printf("Thang 2 co 28 ngay");
            }
            break;
	
	}
}
