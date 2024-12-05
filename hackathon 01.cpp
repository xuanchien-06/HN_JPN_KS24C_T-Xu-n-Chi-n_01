#include<stdio.h>

int main(){
	int arr[100];
	int n,choice;
	int x=arr[0];
	int vitri,giatri;
	do{
	printf("\nMenu\n");
	printf("1.Nhap so phan tu va gia tri cho mang\n");
	printf("2.In ra gia tri cac phan tu trong mang\n");
	printf("3.Dem so luong cac so nguyen to trong mang\n");
	printf("4.Tim gia tri nho thu 2 trong mang\n");
	printf("5.Them mot phan tu vao vi tri ngau nhien trong mang\n");
	printf("6.Xoa phan tu tai vi tri cu the\n");
	printf("7.Sap xep mang theo thu tu giam dan\n");
	printf("8.Cho nguoi dung nhap vao mot phan tu, tim kiem phan tu do co ton tai trong mang hay khong\n");
	printf("9.Xoa toan bo phan tu trung lap va hien thi toan bo phan tu doc nhat co o trong mang\n");
	printf("10.Dao nguoc thu tu cua cac phan tu co trong mang\n");
	printf("11.Thoat\n");
	scanf("%d",&choice);
		switch(choice){
			case 1://nhap so phan tu va gia tri cho mang
				printf("Nhap so luong phan tu cho mang: ");
				scanf("%d",&n);
				for(int i=0;i<n;i++){
				printf("Nhap gia tri cho mang: ");
				scanf("%d",&arr[i]);
				}
				break;
			case 2://In ra gia tri cac phan tu trong mang
				
				printf("In ra gia tri phan tu trong mang: ");	
				for(int i=0;i<n;i++){
					printf("\narr[%d]=%d",i,arr[i]);
				}
				break;
			case 3://Dem so luong cac so nguyen to trong mang
				
				
				break;
			case 4://Tim gia tri nho thu 2 trong mang
				
				for(int i=1;i<n;i++){
					if(arr[i]<x){
						x=arr[i];
					}
				}
				printf("%d",x);
				break;
			case 5://them mot phan tu vao trong mang
			
				printf("Nhap vi tri muon them: ");
				scanf("%d",&vitri);
				printf("Nhap gia tri muon them: ");
				scanf("%d",&giatri);
				if(vitri<0||vitri>n){
					printf("Vi tri muon them khong hop le\n");
				}else{
					for(int i=n;i>vitri;i--){
						arr[i]=arr[i-1];
					}
					arr[vitri]=giatri;
					n++;
				}	
				for(int i=0;i<n;i++){
					printf("%d\t",arr[i]);
				}
				printf("\n");
				break;
			case 6:
				
				printf("Nhap vao vi tri ban muon xoa: ");
				scanf("%d", &vitri);
				if(vitri <0 ||vitri>n){
					printf("So ban nhap khong hop le. Vui long thu lai!");
				}
				for(int i =vitri; i<n-1;i++){
					arr[i]=arr[i+1];
				}
				n--;
				for(int i =0; i<n;i++){
					printf("%d\t", arr[i]);
				}
				printf("\n");
				break;
				case 11:
					return 0;
		}
	}
	while(choice!=11);
	return 0;
}
