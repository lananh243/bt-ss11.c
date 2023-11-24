#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	int numbers[n];
	int searchValue;
	do{
		printf("1.In gia tri cac phan tu cua mang\n");
		printf("2.Tim tat ca cac phan tu trong mang co gia tri bang gia tri tim kiem\n");
		printf("3.Tim kiem phan tu trong mang\n");
		printf("4.Thoat\n");
		printf("Lua chon cua ban:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(int i=0;i<n;i++){
				printf("numbers[%d]=",i);
				scanf("%d",&numbers[i]);
				}
				printf("Nhap gia tri cac phan tu mang:\n");
				for(int i=0;i<n;i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");
				break;
			case 2:
				printf("Nhap vao gia tri can tim trong mang:");
		        scanf("%d",&searchValue);
		        int i;
				int flagSearched = 0;
				for(i=0;i<n;i++){
					if(numbers[i]==searchValue){
						flagSearched = 1;
						break;
					}
				}
				if(flagSearched==1){
					printf("Trong mang co phan tu chi so %d co gia tri bang %d\n",i,numbers[i]);
				}else{
					printf("Khong tim thay phan tu co gia tri %d trong mang\n",searchValue);
				}
				
  				break;
  			case 3:
  				printf("Nhap vao gia tri can tim trong mang:");
		        scanf("%d",&searchValue);
				int start=0;
				int end = sizeof(numbers)/sizeof(int);
				int mid;
				while(start<=end){
					mid=(start+end)/2;
					if(numbers[mid]==searchValue){
						break;
					}else if(numbers[mid]<searchValue){
						start=mid+1;
					}else{
						end=mid-1;
					}
				}
				if(numbers[mid]==searchValue){
					printf("Phan tu co chi so %d trong mang co gia tri %d\n",mid,numbers[mid]);
				}else{
					printf("Khong tim thay phan tu co gia tri %d trong mang \n",searchValue);
				}
				break;
			case 4:
				exit(0);
			default:
				printf("Vui long nhap tu 1-4");
		}
	}while(1==1);
}
