#include <stdio.h>
#include <locale.h>

int main(){
    char *locale = setlocale(LC_ALL, "");
    float a = 0;
    float b = 0;
    printf("Ââåäèòå ñòîðîíó a: ");
    scanf("%e", &a);
    printf("Ââåäèòå ñòîðîíó b: ");
    scanf("%e", &b);
    float s = a*b;
    float p = 2*(a+b);
    printf("Ïëîùàäü = %g \n", s);
    printf("Ïåðèìåòð = %g \n", p);
    return 0;
}
