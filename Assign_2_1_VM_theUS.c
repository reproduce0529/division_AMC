#include <stdio.h>	// scanf, printf�� ����� �� �ְ� �մϴ�.

#define HALF	50
#define QUARTER	25
#define DIME	10
#define NICKEL	 5
#define PENNY	 1


int division(int v1, int v2){
	if(v2 == 0){// ������ ���� 0�̶�� �Ʒ� �ڵ带 �����մϴ�. 
		printf("0���� ���� �������� �� �����ϴ�.");
		return 0; //  0�� ����մϴ�. 
	}else{ //������ ���� 0�� �ƴ϶�� �Ʒ� �ڵ带 �����մϴ�.
		int val = v1/v2;
		return val;// ������ ���� ����մϴ�. 
	}
}


int Remainder(int v1, int v2){
	if(v2 == 0){// ������ ���� 0�̶�� �Ʒ� �ڵ带 �����մϴ�. 
		printf("0���� ���� �������� �� �����ϴ�.");
		return 0; //  0�� ����մϴ�. 
	}else{ //������ ���� 0�� �ƴ϶�� �Ʒ� �ڵ带 �����մϴ�.
		int val = v1%v2;
		return val;// ������ ���� ����մϴ�. 
	}
}

int main() {
	// ���� �����
	// �Է��� ���� ����
	int input;
	float price;
	float change;

	// �Ž����� ���ϱ� ���ؼ� �������� �������� �߰��� ����ؾ��մϴ�.
	int temp;
	int chgHd, chgQt, chgDm, chgNk, chgPn;

	// ����� �Էº�
	printf("������ �ݾ��� ��? (����: �޷�) >> ");
	scanf_s("%d", &input);
	printf("���� ������ ��? (����: �޷�) ");
	do {
		printf("(����: $%d) >> ", input);
		scanf_s("%f", &price);
	} while (input < price);

	// �����
	change = input - price;
	temp = change * 100;

	chgHd = division(temp, HALF);
	temp = Remainder(temp, HALF);

	chgQt = division(temp, QUARTER);
	temp = Remainder(temp, QUARTER);

	chgDm = division(temp, DIME);
	temp = Remainder(temp, DIME);

	chgNk = division(temp, NICKEL);
	temp = Remainder(temp, NICKEL);

	chgPn = division(temp, PENNY);
	temp = Remainder(temp, PENNY);

	// ��º�
	printf("���� �ݾ�: $%d\n", input);
	printf("���� ����: $%.2f\n", price);
	printf("\n�Ž�����: $%.2f", change);

	printf("\n\tHalf Dollar ����: %d", chgHd);
	printf("\n\tQuarter ����: %d", chgQt);
	printf("\n\tDime ����: %d", chgDm);
	printf("\n\tNickel ����: %d", chgNk);
	printf("\n\tPenny ����: %d", chgPn);

	// �����
	return 0;
}
