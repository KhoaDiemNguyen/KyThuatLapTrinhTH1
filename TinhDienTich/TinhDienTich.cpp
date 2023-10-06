#include<stdio.h>
#include"Area.h"

int main(){
	int i=0;
	do{
		printf("Ban muon tinh dien tich hinh gi:\n");
		printf("1:Hinh vuong\n");
		printf("2:Hinh hinh chu nhat\n");
		printf("3:Hinh binh hanh\n");
		printf("4:Hinh hinh thoi\n");
		printf("5:Hinh hinh tam giac\n");
		printf("6:Hinh tron\n");
		scanf("%d",&i);
		if(i==1){
			double a;
			printf("Nhap vao do dai canh a:\n");
			scanf("%lf",&a);
			double dientich =squareArea(a);
			printf("Dien tich hinh vuong la:%lf\n",dientich);
		}else if(i==2){
			double a,b;
			printf("Nhap vao chieu dai: \n");
			scanf("%lf",&a);
			printf("Nhap vao chieu rong:\n");
			scanf("%lf",&b);
			double dientich = rectangleArea(a,b);
			printf("Dien tich hinh chu nhat la:%lf\n",dientich);
		}else if(i==3){
			double a,h;
			printf("Nhap vao do dai canh day: \n");
			scanf("%lf",&a);
			printf("Nhap vao do dai duong cao:\n");
			scanf("%lf",&h);
			double dientich = parallelogramArea(a,h);
			printf("Dien tich hinh chu nhat la:%lf\n",dientich);
		}else if(i==4){
			double a,b;
			printf("Nhap vao do dai duong cheo 1: \n");
			scanf("%lf",&a);
			printf("Nhap vao do dai duong cheo 2:\n");
			scanf("%lf",&b);
			double dientich = rhombusArea(a,b);
			printf("Dien tich hinh thoi la:%lf\n",dientich);
		}else if(i==5){
			double a,h;
			printf("Nhap vao do dai canh day: \n");
			scanf("%lf",&a);
			printf("Nhap vao do dai duong cao:\n");
			scanf("%lf",&h);
			double dientich = triangleArea(a,h);
			printf("Dien tich hinh tam giac la:%lf\n",dientich);
		}else if(i==6){
			double r;
			printf("Nhap vao ban kinh duong tron:\n");
			scanf("%lf",&r);
			double dientich = circleArea(r);
			printf("Dien tich hinh tron la:%lf\n",dientich);
		}else{
			continue;
		}
	}while(1);

}
