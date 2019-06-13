#include <iostream>
#include <unistd.h>

using namespace std;
int main()
{
	int i;

	cout << "ok ledis, wir zählen jetzt gemeinsam bis 10" << endl;
	for (i = 0; i < 10; i++)
	{
		sleep(1);
		cout << i << endl;
	}

	sleep(3);

	cout << "episch prankiert" << endl;

	return 0;
}
