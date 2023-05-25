#include <stdio.h>

int main() {
    char input[100];
    int uppercaseCount = 0;
    int lowercaseCount = 0;
    int splcharacterCount=0;
    int i = 0;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    while (input[i] != '\0') {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            uppercaseCount++;
        } else if (input[i] >= 'a' && input[i] <= 'z') {
            lowercaseCount++;
        }else{
        	splcharacterCount;
		}
        i++;
    }

    printf("Number of uppercase letters: %d\n", uppercaseCount);
    printf("Number of lowercase letters: %d\n", lowercaseCount);
    printf("Number of special characters:%d\n",splcharacterCount);
    return 0;
}

