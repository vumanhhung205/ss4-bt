#include<stdio.h>
int main(){
	int chiSoCu, chiSoMoi;
	printf("nhap chi so cu: ");
	scanf("%d", &chiSoCu);
	printf("nhap chi so moi: ");
	scanf("%d", &chiSoMoi);
	int soDien = chiSoMoi - chiSoCu;
	int tienDien;
	if (soDien>=0 && soDien<50 ){
		tienDien = soDien*10000;
		printf("so tien dien phai tra la: %d", tienDien);
	}else if(soDien>=50 && soDien<100){
		tienDien = soDien*15000;
		printf("so tien dien phai tra la: %d", tienDien);
	}else if(soDien>=100 && soDien<150){
		tienDien = soDien*20000;
		printf("so tien dien phai tra la: %d",tienDien);
	}else if(soDien>=150 && soDien<200){
		tienDien = soDien*25000;
		printf("so tien dien phai tra la: %d",tienDien);
	}else if(soDien>=200){
		tienDien = soDien*30000;
		printf("so tien dien phai tra la: %d",tienDien);
	}
}
