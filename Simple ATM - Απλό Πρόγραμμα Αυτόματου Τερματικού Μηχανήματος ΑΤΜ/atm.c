/*
��� ���� ��������� ��������� ���������� ����������� (ATM) �������� �� C

����������: �����-�������

A Simple ATM Program by Nikos-Nikitas.

*/

#include <stdio.h> // � ���������� ��� standard input/output ��� C.
#include <stdlib.h> // � ���������� ��� ��� ��������� exit(status) ��� ��� ������� �� ������������ �� ��������� ���� �������.

int here = 1; // �� ������ ��� ������ ��� ��� ������ ���.

long balance = 3000; // �� ��������� ���� ��� ����������� ��� �� long ��� ������ �����.

int pins[] = {1234,28962,56581,550569,12345678,25647983}; // �� ������� ��� ������� (�������� ����� ����������������. ��� �� ��������������� ���� ��� ��� ������� ���. ����� ���� ��� ��������.)

int pin; // � ������� ��� ��� �� ����� � ������� �� ��������� �� ���� ��������������. �� ������� ��� �������, ������ ��������� �� �������.

void menu(), add(), withdraw(), show();
/* �� ����������� ��� �� ���������������� ���:
    - ������ ����� �� ��� ��������
    - ��������/�������� ��� ���� ���
    - �������� ��� ����� ��� ����������� ���.
    ���� �� ����������� ����� ��� main() ��� ����� ����������� ��� ������ �����.
*/
void menu() {

    puts("\t\t\t - Main Menu - \t\t\t");

    puts("\t\t\t[1] Show Account Balance\n\t\t\t[2] Add\n\t\t\t[3] Withdraw\n\t\t\t[4] Exit\n");

    int c;

    scanf("%d",&c); // ������� ��� ������� ��� ������ ��� ������� ��� ������� ��������� ��� ���������. �� ��� ��������� ������ ��� ��� �������� ��������� �� �������.


switch(c) {

case 1:
    show();
    break;
case 2:
    add();
    break;
case 3:
    withdraw();
    break;
case 4:
    exit(0);
    break;
default:
    menu();
    }
}

void add() {

    long a;

    puts("Insert amount to add: ");

    scanf("%ld",&a);

    balance = balance+a;

    printf("Your balance now is: %ld",balance);

    return menu();
}

void withdraw() {
    long w;

    printf("Your balance is: %ld \n",balance);
    puts("Insert amount to withdraw: ");

    scanf("%ld",&w);

    balance = balance-w;

    printf("Your balance now is: %ld",balance);

    return menu();

}

void show() {

    printf("Your balance is: %ld",balance);

    return menu();
}

void main(){

     puts("#\t\t\t oNe\t\t\t#\n#\t\t\t Simple\t\t\t#\n#\t\t\t A-T-M\t\t\t#");

     puts("#\t\t\t by nikosnikitas\t#\n");

     while(here==1) {

     puts("Insert PIN\n");

     scanf("%d",&pin);

    for(int i=0; i<sizeof(pins); i++) {
     if(pins[i] == pin) {
        here=0;
     }
     }
     }
     menu();
 }
