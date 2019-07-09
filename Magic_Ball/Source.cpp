#include <iostream>
#include <time.h>

using namespace std;
char ansver[40][64] = {
"щрн ме бнглнфмн",
"щрн бнглнфмн",
"дю",
"мер",
"ме дслюч",
"дслюч дю",
"бепнърмее бяецн",
"люкнбепнърмн",
"бнглнфмн",
"ме бнглнфмн",
"яопнях врн мхасдэ он кецве",
"ксвье ме яопюьхбюи",
"рюй рнвмн",
"мхйюй мер",
"онопнаси яопняхрэ онгфе",
"аюирш яецндмъ ме акюцнбнкър реае, опнаси онгфе",
"йнлоэчреп цнбнпхр мер",
"йнлоэчреп цнбнпхр дю",
"хмрепеямши бнопня, мю йнрнпши онйю мер нрберю",
"ме дслюи на щрнл",
"еяреярбеммн дю",
"еяреярбеммн мер",
"йюферяъ дю, мн щрн ме рнвмн",
"йюферяъ мер, мн щрн ме рнвмн",
"гбегдш цнбнпър мер",
"гбегдш цнбнпър дю",
"нрбер онйю ме ъяем",
"ндмнгмювмн дю",
"ндмнгмювмн мер",
"йнмевмн дю",
"йнмевмн мер",
"гюбхяхр нр реаъ",
"дю асдер рюй",
"яйнпее дю вел мер",
"яйнпее мер вел дю",
"мсфмн ондслюрэ",
"дслюч рш х рюй гмюеьэ нрбер",
"ондслюи , бнглнфмн кх щрн бннаые",
"яеивюя ме лнцс нрберхрэ мю щрнр бнопня",
"бяе рюй йюй днкфмн ашрэ ме гюлнпювхбюияъ"
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
		cout << "яопюьхбюи еые" << endl;
	}
	if (mode == 2)
	{
		srand(strlen(question));
		index = rand() % 40;
		cout << endl;
		cout << ansver[index] << endl;
		cout << endl;
		cout << "яопюьхбюи еые" << endl;
	}

}


int main()
{
	unsigned int mode = 0;
	unsigned int sleepTime;
	char question[256];
	setlocale(LC_ALL, "Russian");
	cout << "опхберярбсч реаъ онбекхрекэ б люцхвеяйни гнме" << endl;
	cout << "рср рш лнфеьэ сгмюрэ нрбер мю кчани бнопня " << endl;
	cout << endl;
	cout << "яопюьхбюи" << endl;

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