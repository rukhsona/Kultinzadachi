#include <stdio.h>
#include <conio.h>
#include <math.h> // ��� ����㯠 � M_PI

// ��ꥬ 樫����
float vcil(float h, float r)
{
    return(M_PI*r*r*h);
}

void main()
{
    float r,h; // ���� � ࠤ��� �᭮����� 樫����
    float v;   // ��ꥬ 樫����

    puts("���᫥��� ��ꥬ� 樫����");
    printf("������ ����� � ࠤ��� �᭮����� ->");
    scanf("%f%f", &h, &r);
    v = vcil(h, r);
    printf("��ꥬ 樫���� %3.2f\n", v);
    
    printf("��� �����襭�� ������ <Enter>");
    getch();
}

