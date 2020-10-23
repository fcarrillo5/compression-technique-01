#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

/*
 * Complete the 'compressedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING message as parameter.
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
char* compressedString(char* message) {
	
	int message_size = strlen(message);
    char *compressedMsg;
    compressedMsg = (char*) malloc(sizeof(char) * message_size);
    int counter = 0;
    char buffer[4];
    
    static int index = 0;
    int pos = 0;
    while (message[index] != '\0') {
        pos++;
        while(message[index] == message[index + pos]) {
            counter++;
            pos++;
        }
        if(counter == 0){
            sprintf(buffer, "%c", message[index]);
            strcat(compressedMsg, buffer);
        }
        else {
            sprintf(buffer, "%c%d", message[index], counter + 1);
            strcat(compressedMsg, buffer);
            counter = 0;
        }
        
        index += pos;
        pos = 0;
    }
    
    return compressedMsg;
}

int main()