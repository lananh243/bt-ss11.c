#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	int numbers[n];
	do{
		printf("******************MENU********************\n");
		printf("1.In gia tri cac phan tu cua mang\n");
		printf("2.Su dung Insertion Sort sap xep mang giam dan va in ra\n");
		printf("3.Su dung Selestion Sort sap xep mang tang dan va in ra\n");
		printf("4.Su dung Bubbble Sort sap xep mang giam dan va in ra\n");
		printf("5.Thoat\n");
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
				for(int i=1;i<n;i++){
					int key = numbers[i];
					int j = i-1;
					while(j>=0 && numbers[j]<key){
						numbers[j+1]=numbers[j];
						j = j-1;
					}
					numbers[j+1] = key;
				}
				printf("Mang sau khi da sap xep giam dan :\n");
				for(int i=0;i<n;i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");
				break;
			case 3:
				for(int i=0;i<n;i++){
					for(int j=i+1;j<n;j++){
						if(numbers[i] > numbers[j]){
							int temp = numbers[i];
							numbers[i] = numbers[j];
							numbers[j] = temp;
						}
					}
				}
				printf("Mang sau khi da sap xep tang dan :\n");
				for(int i=0;i<n;i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");
				break;
			case 4:
				for(int i=0;i<n-1;i++){
					for(int j=0;j<n-i-1;j++){
						if(numbers[j] < numbers[j+1]){
							int temp = numbers[j];
							numbers[j] = numbers[j+1];
							numbers[j+1] = temp;
						}
					}
				}
				printf("Mang sau khi da sap xep giam dan :\n");
				for(int i=0;i<n;i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");
				break;
			case 5:
				exit(0);
			default:
				printf("Vui long nhap tu 1-5\n");
			
		}
	}while(1==1);
}
	

	
