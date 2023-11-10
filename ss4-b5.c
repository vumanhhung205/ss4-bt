 #include<stdio.h>
int main(){
	int day,month,year;
	printf("nhap ngay: ");
	scanf("%d", &day);
	printf("nhap thang: ");
	scanf("%d", &month);
	printf("nhap nam: ");
	scanf("%d", &year);
	if(year > 0){
		printf("\nnam hop le");
	}else {
		printf("\nnam khong hop le");
	}
	if( month>=1 && month<=12 ){
		printf("\nthang hop le");
	}else{
		printf("\nthang khong hop le");
	}	
}
