// �㭪�� �襭�� �����⭮�� �ࠢ�����
#include "stdio.h"
#include "conio.h"
#include "math.h"

int kvadur(float a, float b, float c, // ����-�� �ࠢ�����
            float *x1, float *x2)      // ��୨ �ࠢ�����
    // ���祭�� �㭪樨 - ������⢮ ��୥�
    // ��� -1, �᫨ ������ ��室�� �����
{
    float d; // ���ਬ�����

    if (a == 0) return(-1);

    d = b*b-4*a*c;
    if (d < 0)
    return(0);    // �ࠢ����� �� ����� �襭��

    *x1 = (-b+sqrt(d))/(2*a);
    *x2 = (-b-sqrt(d))/(2*a);

    if (*x1 != *x2) return(2);
        else return(1);
}

// �஢�ઠ ࠡ��ᯮᮡ���� �㭪樨
void main()
{
    float a,b,c;  // �����樥��� �ࠢ�����
    float x1,x2;  // ��୨ �ࠢ�����
    int n;        // ���-�� ��୥�

    puts("\n��襭�� �����⭮�� �ࠢ�����");
    puts("������ � ����� ��ப� �����樥��� � ������ <Enter>");
    printf("->");
    scanf("%f%f%f", &a, &b, &c);
    switch (kvadur(a,b,c,&x1,&x2))
    {
        case -1: puts("�訡�� ��室��� ������.");
                 break;
        case 0:  puts("�ࠢ����� �� ����� �襭��.");
                 break;
        case 1:  printf("��୨ ���������: x=%3.2f", x1);
                 break;
        case 2:  printf("x1=%3.2f x2=%3.2f", x1, x2);
    }

    puts("\n��� �����襭�� ࠡ��� ������ <Enter>");
    getch();
}

