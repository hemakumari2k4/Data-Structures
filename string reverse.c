#include <stdio.h>
int main(){
    char input[100];
    char reversed[100];
    int length=0;
    int i,j;
	printf("Enter a string: ");
    fgets(input,sizeof(input),stdin);
    while(input[length]!='\0'&&input[length]!='\n'){
        length++;
    }
    for(i=length-1,j=0;i>=0;i--,j++){
        reversed[j]=input[i];
    }
    reversed[length]='\0'; 
	printf("Original string:%s", input);
    printf("Reversed string:%s", reversed);
	return 0;
}

