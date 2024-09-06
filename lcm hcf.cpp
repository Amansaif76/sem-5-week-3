#include<stdio.h>
int main(){
	int a,b,hcf,lcm;
	printf("enter the two numbers:");
	scanf("%d %d",&a ,&b);
	for(int i=1;i<a;i++){
		if(a%i ==0 && b%i == 0){
			hcf = i;
		}
	}
	lcm = (a*b)/hcf;
	printf("hcf and lcm of two numbers is : %d %d ",hcf ,lcm);
	
	
}
