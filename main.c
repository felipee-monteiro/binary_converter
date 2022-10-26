#include <stdio.h>
#include <string.h>

void getBinary(int number){
    int result_module = 0;
    int items = 1, index = 0;
    int binary_results[items];
    do {
        items++;
        result_module = number % 2;
        binary_results[items - 1] = result_module;
        printf("%i", binary_results[items - 1]);
        number = number / 2;
    } while (number != 0);
    printf("\t");
}

int main(){
    char word_to_convert[24];
    printf("Digite a palavra que deseja converter(maximo 24 caracteres):\n");
    scanf("%s", &word_to_convert);
    printf("\n");
    int wordlen = strlen(word_to_convert);
    for (int i = 0; i < wordlen; i++) {
        int letter_decimal = (int)word_to_convert[i];
        getBinary(letter_decimal);
    }
    return 0;
}
