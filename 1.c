#include <stdio.h>
#include <locale.h>

int main(){
    char *locale = setlocale(LC_ALL, "");
    float a = 0;
    float b = 0;
    printf("������� ������� a: ");
    scanf("%e", &a);
    printf("������� ������� b: ");
    scanf("%e", &b);
    float s = a*b;
    float p = 2*(a+b);
    printf("������� = %g \n", s);
    printf("�������� = %g \n", p);
    return 0;
}
