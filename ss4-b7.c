#include<stdio.h>
int main(){
	int luongcoban;
	int songaycong;
	int congthang = 26;
	printf("nhap luong co ban: ");
	scanf("%d", &luongcoban);
	printf("nhap so ngay cong: ");
	scanf("%d", &songaycong);
	float luongthang;
	if (songaycong=congthang){
	luongthang = luongcoban*(songaycong/congthang);
	printf("%.2f", luongthang);	
	}
}
