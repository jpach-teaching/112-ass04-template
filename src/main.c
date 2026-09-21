// main.c — local sandbox, do NOT submit

#include <stdio.h>

// prototypes from code.c
void   clear_string(char s[], int n);
int    my_isdigit(char c);
int    my_islower(char c);
int    my_isupper(char c);
int    my_isalpha(char c);
int    my_isalnum(char c);
int    my_strcmp(char a[], char b[]);
int    my_strchr(char s[], char c);
int    my_pow(int a, int b);
double my_pow_double(double a, int b);
char * format_my_isupper(char dest[], char c, int r);
char * format_my_isalpha(char dest[], char c, int r);
char * format_my_isalnum(char dest[], char c, int r);
char * format_my_strcmp(char dest[], int r);
char * format_my_strchr(char dest[], int r);
char * format_my_pow(char dest[], int r);
char * format_my_pow_double(char dest[], double r);

int main(void)
{
    char buffer[64]; 

    clear_string(buffer, 64);
    buffer[25]= 'a';
    buffer[27]= 'b';
    buffer[2]= 'c';
    clear_string(buffer, 64);
    

    // test your functions here:
    // my_isdigit('5');
    // printf("%d\n", my_pow(2, 8));
    // printf("%s\n", format_my_pow(buf, my_pow(2, 8)));

    return 0;
}