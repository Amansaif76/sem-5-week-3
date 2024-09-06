#include<stdio.h>
int main(){
	int  dec;
	printf("enter the decimal number:");
	scanf("%d",&dec);
	int bin[100] ;
	int rem;
	int i=0;
	int n=0;
	while(dec>0){
		rem = dec%2;
		bin[i] = rem;
		dec = dec/2;
		i++;
		n++;
		
	}
	for(int i=n-1;i>=0;i--){
	
	printf("%d",bin[i]);
}
}
