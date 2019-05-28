#include<stdio.h>
#include<stdlib.h>

int main(void){
	
		FILE *fptr;
		char ch;
		fptr=fopen("data.txt","r");
		if(fptr!=NULL){
			while((ch=getc(fptr))!=EOF){  //bug出現的地方 
				
				printf("%c", ch);
			}
			fclose(fptr);
		}
		else{
			printf("3A713245 施育昇");
		}
		
		system("pause");
		return 0;
} 
