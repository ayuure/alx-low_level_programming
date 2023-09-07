#include <stdio.h>
/**
*main - a program that prints sizes of types
*
* Return: 0 (Sucess)
*/
int main(void){
printf("size of a char: %zu byte(s)",sizeof(char));
printf("size of an int: %zu byte(s)",sizeof(int));
printf("size of a long int: %zu byte(s)",sizeof(long int));
printf("size of a long long int: %zu byte(s)",sizeof(long long int));
printf("size of a float: %zu byte(s)",sizeof(float));
return (0);
}
