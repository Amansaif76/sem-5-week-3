#include<stdio.h>
#include<math.h>
int main(){
	int b ;
	printf("enter the binary number:");
	scanf("%d",&b);
	
	int decimal =0;
	int i=0;
	int rem;
	while(b>0){
		rem = b%10;
		decimal = rem*(int)pow(2,i) +decimal;
		b = b/10;
	
	i++;
	}
	printf("%d",decimal);
	
}
