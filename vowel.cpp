#include<stdio.h>
int main(){
	int n;
	char arr[n];
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the string:");
	for(int i=0;i<n;i++){
		scanf("%c",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%c",arr[i]);
	}
	printf("\n");
	int count =0;
	for(int i=0;i<n;i++){
		if(arr[i]== 'a'||arr[i]== 'e'||arr[i]== 'i'||arr[i]== 'o'||arr[i]== 'u'||arr[i]== 'A'||arr[i]== 'E'||arr[i]== 'I'||arr[i]== 'O'||arr[i]== 'U'){
			count++;
		}
		   
		}
		printf("number of consonant and vowels are :%d",count);
		int con = n- count;
		printf("\n numbers of consonant are:%d",con);
}
