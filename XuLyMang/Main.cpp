#include<stdio.h>
#include"handleArray.h"



int main(){
	int n,A[n];
	do{
		printf("Ban muon lam gi:\n");
		printf("1:Nhap mang\n");
		printf("2:In mang\n");
		printf("3:Sap xep mang\n");
		printf("4:Tim kiem trong mang\n");
		int select;
		scanf("%d",&select);
		if(select==1){
			printf("Ban muon nhap bao nhieu phan tu:");
			scanf("%d",&n);
			insertArray(A,n);
		}else if(select==2){
			outputArray(A,n);
		}else if(select==3){
			quickSortAsc(A,n);
		}else if(select==4){
			int a;
			printf("Ban muon tim kiem phan tu:");
			scanf("%d",&a);
			int result=binarySearch(A,a,0,n);	
			if(result ==-1){
				printf("Khong tim thay phan tu nay.\n");
			}else{
				printf("Phan tu ban tim nam o index %d\n",result);
			}
		}
	}while(1);
}
