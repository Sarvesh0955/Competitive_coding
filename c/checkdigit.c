#include <stdio.h>
int main() {
    int character;
    printf("Enter a character: ");
    scanf("%d", &character);
    
    if(character <= 9 && character >=0){
        printf("%d", character);
    } else {
        printf("invalid");
    }
    return 0;
}