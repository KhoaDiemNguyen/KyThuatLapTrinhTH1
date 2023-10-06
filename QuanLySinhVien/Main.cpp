#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quanlysv.h"




int main(){
	int n;

	int select;
	do{
		printf("Ban muon lam gi: ");
		printf("\n1:Nhap sinh vien\n2:Hien thi sinh vien\n3:Sap xep sinh vien theo diem\n4:Sap xep sinh vien theo ten\n5:Hien thi thong tin sinh vien co diem lon hon 4\n6:Thoat chuong trinh\n");
		scanf("%d",&select);
		switch(select){
			case 1:{
				printf("\nBan muon nhap bao nhieu sinh vien: ");
				scanf("%d",&n);
				SV stu[n];
				insertSVs(stu,n);
				writeFile(stu,n);
				break;
			}
			case 2:{
				SV stu[n];
				readBin(stu,&n);
				printSVs(stu,n);
				break;
			}
			case 3:{
				SV stu[n];				
				readBin(stu,&n);
				sortSVbyDiem(stu,n);
				writeFile(stu,n);
				readBin(stu,&n);
				printSVs(stu,n);
				break;
			}
			case 4:{
				SV stu[n];
				readBin(stu,&n);
				sortSVbyTen(stu,n);
				writeFile(stu,n);
				readBin(stu,&n);
				printSVs(stu,n);
				break;
			}
			case 5:{
				SV stu[n];
				readBin(stu,&n);
				searchSV(stu,n);
				break;
			}
			case 6:{
				return 0;
			}
			default : printf("Error select !"); break;
		}
	}while(select !=6);
	return 0;
}
