#define ftxt "Students.txt"
#define fbin "Students.dat"

struct SinhVien{
    char 	ten[30];
    char 	gt[5];
	char 	lop[5];
    char 	nghe[5];
    int  	khoa;
    float	diem;
};
typedef SinhVien SV;

void insertSV(SV &sv){
	printf("\n Nhap ten sinh vien: "); 
	fflush(stdin);
	gets(sv.ten);
	printf("\n Nhap vao gioi tinh: ");
	gets(sv.gt);
	printf("\n Nhap vao lop cua sinh vien: ");
	gets(sv.lop);
	printf("\n Nhap vao nghe cua sinh vien: ");
	gets(sv.nghe);
	printf("\n Nhap vao khoa cua sinh vien (Chi nhap so): ");
	scanf("%d",&sv.khoa);
	printf("\n Nhap vao diem cua sinh vien: ");
	scanf("%f",&sv.diem);
}
void insertSVs(SV a[], int n){
    printf("\n____________________________________\n");
    for(int i = 0; i< n; ++i){
        printf("\nNhap SV thu %d:", i+1);
        insertSV(a[i]);
    }
    printf("\n____________________________________\n");
}
void printSV(SV sv){
	printf("\n Ten sinh vien: %s",sv.ten);
	printf("\n Gioi tinh: %s",sv.gt);
	printf("\n Lop cua sinh vien: %s",sv.lop);
	printf("\n Nghe cua sinh vien: %s",sv.nghe);
	printf("\n Khoa cua sinh vien: %d",sv.khoa);
	printf("\n Diem cua sinh vien: %f",sv.diem);
}
void printSVs(SV a[],int n){
	    printf("\n____________________________________\n");
    for(int i = 0; i< n; ++i){
        printf("\nThong tin SV thu %d:", i+1);
        printSV(a[i]);
    }
    printf("\n____________________________________\n");
}
void sortSVbyDiem(SV a[],int n){
	SV tmp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].diem<a[j].diem){
				tmp =a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}
void sortSVbyTen(SV a[],int n){
	SV tmp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(a[i].ten,a[j].ten)>0){
				tmp =a[i];
				a[i]=a[j];
				a[j]=tmp; 
			}
		}
	}
}
void searchSV(SV a[],int n){
	printf("\n Danh sach sinh vien co diem tren 4 la:");
	for(int i=0;i<n;i++){
		if(a[i].diem>4){
			printf("%s\n",a[i].ten);
		}
	}
}
void writeBin(SV sv[], int n) {
    FILE *f = fopen(fbin, "wb");
    if (f == NULL) {
        printf("Error load file");
        return;
    }

    fwrite(sv, sizeof(SV), n, f);
    fclose(f);
}

void writeFile(SV a[], int n) {
    FILE *f = fopen(ftxt, "w");
    if (f == NULL) {
        printf("Error load file");
        return;
    }

    fprintf(f, "%-30s %-10s %-10s %-10s %-10s %-10s\n", "Ten", "GioiTinh", "Lop", "Nghe", "Khoa", "Diem");
    for (int i = 0; i < n; i++) {
        fprintf(f, "%-30s %-10s %-10s %-10s %-10d %.2f\n", a[i].ten, a[i].gt, a[i].lop, a[i].nghe, a[i].khoa, a[i].diem);
    }
    fclose(f);

    writeBin(a, n);

}
void readBin(SV sv[], int *n){
    FILE *f = fopen(fbin,"rb");
    fseek(f,0,SEEK_END); 
    (*n) = (ftell(f)+1)/sizeof(SV); 
    fseek(f,0,SEEK_SET);
    fread(sv,sizeof(SV),(*n),f);
    fclose(f);
}
