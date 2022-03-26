#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char isim[50];
	char sifre[5];
	char isimVeri[]={"Rumeysa"};
	char sifreVeri[]={"12345"};
	
	printf("Lutfen Kullanici Adinizi Girin: ");
	scanf("%s",&isim);
	printf("LUtfen Sifrenizi Giriniz: ");
	scanf("%d",&sifre);
	if(strcmp(isim,isimVeri)==0 && strcmp(sifre,sifreVeri)==0)
	{
		printf("Kullanici Bilgileri Eslesti.");
	}
	else
	{
		printf("Kullanici Bilgileri Eslesmedi.");
	}
	
	
	
	
	//char isim[]={"Rumeysa"};
	//char soyisim[]={"Rumeysa"};
	
	//if(strcmp(isim,soyisim)==0)
	//{
		//printf("Kullanici Bilgileri Eslesti.");
	//}
	//else
	//{
		//printf("Kullanici Bilgileri Hatalidir.");
	//}
	
	
	
	
	//char isim[]={"Rumeysa"};
	//char soyisim[]={"Ozguc"};
	
	//int sayi=strlen(isim);
	//printf("%d",sayi);
	
	return 0;
}
