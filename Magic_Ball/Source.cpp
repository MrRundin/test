#include <iostream>
#include <time.h>

using namespace std;
char ansver[40][64] = {
"��� �� ��������",
"��� ��������",
"��",
"���",
"�� �����",
"����� ��",
"��������� �����",
"������������",
"��������",
"�� ��������",
"������ ��� ������ �� �����",
"����� �� ���������",
"��� �����",
"����� ���",
"�������� �������� �����",
"����� ������� �� ���������� ����, ������ �����",
"��������� ������� ���",
"��������� ������� ��",
"���������� ������, �� ������� ���� ��� ������",
"�� ����� �� ����",
"����������� ��",
"����������� ���",
"������� ��, �� ��� �� �����",
"������� ���, �� ��� �� �����",
"������ ������� ���",
"������ ������� ��",
"����� ���� �� ����",
"���������� ��",
"���������� ���",
"������� ��",
"������� ���",
"������� �� ����",
"�� ����� ���",
"������ �� ��� ���",
"������ ��� ��� ��",
"����� ��������",
"����� �� � ��� ������ �����",
"������� , �������� �� ��� ������",
"������ �� ���� �������� �� ���� ������",
"��� ��� ��� ������ ���� �� �������������"
};


void Pause(int milliSeconds)
{
	int endwait;
	endwait = clock() + CLOCKS_PER_SEC;
	while (clock() < endwait) {}
}

void GAns(int mode, char* question)
{
	int index = 0;
	system("cls");
	if (mode == 1)
	{
		srand(time(0));
		index = rand() % 40;
		cout << endl;
		cout << ansver[index] << endl;
		cout << endl;
		cout << "��������� ���" << endl;
	}
	if (mode == 2)
	{
		srand(strlen(question));
		index = rand() % 40;
		cout << endl;
		cout << ansver[index] << endl;
		cout << endl;
		cout << "��������� ���" << endl;
	}

}


int main()
{
	unsigned int mode = 0;
	unsigned int sleepTime;
	char question[256];
	setlocale(LC_ALL, "Russian");
	cout << "����������� ���� ���������� � ���������� ����" << endl;
	cout << "��� �� ������ ������ ����� �� ����� ������ " << endl;
	cout << endl;
	cout << "���������" << endl;

beg:
	fflush(stdin);
	fgets(question, 256, stdin);

	srand(time(0));
	mode = rand() % 2 + 1;
	GAns(mode, question);
	
	goto beg;
	end:
	return 0;
}