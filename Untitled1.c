#include<stdio.h>
int tong1(int a, int b);
int tich1(int a, int b);
int hieu1(int a,int b);
float thuong1(int a,int b);
void main(){
	int tong,tich,hieu,a,b,choice;
	float thuong;
	int x = 1;
	printf("\nEnter value:");scanf("%d %d",&a,&b);
	do{
		printf("\nSum?");
		printf("\nTich?");
		printf("\nThuong?");
		printf("\nHieu?");
		printf("\nchoice is:");
		scanf("%d",&choice);
	switch(choice){
		case 1:
			tong = tong1(a,b);
			printf("sum is %d",tong);
			break;
		case 2:
			tich = tich1(a,b);
			printf("tich is %d",tich);
			break;
		case 3:
			thuong = thuong1(a,b);
			printf("thuong is %f",thuong);
			break;
		case 4:
			hieu = hieu1(a,b);
			printf("hieu is %d",hieu);
			break;
		case 5:
			x = 0;
			printf("\t Goodbye");
			break;
	}
	}while(x >= 1 );
}
int tong1(int a,int b){
	int c;
	c = a+b;
	return(c);}
int tich1(int a, int b){
	int d;
	d = a * b;
	return(d);}
float thuong1(int a,int b){
	float f;
	f = (float)a /b;
	return(f);}
int hieu1(int a, int b){
	int g;
	g = a - b;
	return(g);}
	
	
