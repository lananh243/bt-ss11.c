#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,m;
	printf("Nhap vao so dong cua mang 2 chieu:");
	scanf("%d",&n);
	printf("Nhap vao so cot cua mang 2 chieu:");
	scanf("%d",&m);
	int numbers[n][m];
	printf("Nhap gia tri cac phan tu mang:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("numbers[%d][%d]=",i,j);
						scanf("%d",&numbers[i][j]);
					}
				}
	do{
		printf("1.In gia tri mang theo ma tran\n");
		printf("2.Sap xep mang co gia tri cac phan tu theo dong tang dan\n");
		printf("3.Sap xep mang co gia tri cac phan tu theo cot giam dan\n");
		printf("4.Thoat\n");
		printf("Lua chon cua ban:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Gia tri cac phan tu trong mang:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",numbers[i][j]);
					}
					printf("\n");
				}
				printf("\n");
				break;
			case 2:
				for(int i=0;i<n;i++){
					for(int j=1;j<m;j++){
						int key = numbers[i][j];
						int k = j-1;
						while(k>=0 && key<numbers[i][k]){
							numbers[i][k+1] = numbers[i][k];
							k = k-1;
						}
						numbers[i][k+1]=key;
					}
				}
				printf("Mang sau khi da sap xep tang dan theo hang :\n"); 
                for (int i=0;i<n;i++) {
                   for(int j=0;j<m;j++){
                   	printf("%d\t", numbers[i][j]);
				   }
				   printf("\n");
  				}
				break;
			case 3:
				for(int j=0;j<m;j++){
					for(int i=1;i<n;i++){
						int key = numbers[i][j];
						int k = i-1;
						while(k>=0 && key>numbers[k][j]){
							numbers[k+1][j] = numbers[k][j];
							k = k-1;
						}
						numbers[k+1][j]=key;
					}
				}
				printf("Mang sau khi da sap xep giam dan theo cot :\n"); 
                for (int i=0;i<n;i++) {
                   for(int j=0;j<m;j++){
                   	printf("%d\t", numbers[i][j]);
				   }
				   printf("\n");
  				}
			
				break;
			case 4:
			    exit(0);
			default:
				printf("Vui long nhap tu 1-4");
				
		}
	}while(1==1);
}
