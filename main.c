#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int menu;
	printf("[1]Cevre Bulma (Cember)\n[2]Egim bulma\n[3]Karekok\n[99]Program hakkinda\n[0]Programdan cik\n>> ");
	scanf("%d",&menu);
	if (menu == 1){
		float pi,yaricap,cevre;
		printf("Pi : ");
		scanf("%f",&pi);
		printf("Yari cap : ");
		scanf("%f",&yaricap);
		cevre = 2*pi*yaricap;
		printf("%f\n", cevre);
		printf("Yapilan islem\n2*pi*yaricap");
	}
	if (menu == 2)
	{
		float du,yu,egim;
		printf("Dikey uzunluk : ");
		scanf("%f",&du);
		printf("Yatay uzunluk : ");
		scanf("%f",&yu);
		egim = du/yu;
		printf("Cevap : %f\n",egim);
		printf("Yapilan islem \nm = dikey_uzunluk/yatay_uzunluk");
	}
	if (menu == 3)
	{
		float sayi,karekok;
		printf("Karekok bulunacak sayi : ");
		scanf("%f",&sayi);
		karekok = sqrt(sayi);
		printf("Karekok : %f",karekok);
	}
	if (menu == 99)
	{
		printf("Programi kodlayan\nErol Umut 'GreXLin85' Atalay\nKaynaklar\nhttp://www.matematikciler.com/8-sinif-egim-ve-dogrunun-egimi/\nhttp://www.matematiktutkusu.com/extra/iljijiljiljiljljiljil/cevre-formulleri.htm");
	}
	if (menu == 0)
	{
		system("exit");
	}
	return 0;
}
