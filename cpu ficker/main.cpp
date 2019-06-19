#include <thread>
#include <limits.h>

void fuckthecpu_yeahdigga()
{
	int zahl1;
	int zahl2;
	unsigned long gutes_ergebnis;

	zahl1 = INT_MAX;
	zahl2 = INT_MAX;

	while (true)
	{
		gutes_ergebnis = zahl1 * zahl2;	
	}
}

int main()
{
	std::thread t1(fuckthecpu_yeahdigga);
	std::thread t2(fuckthecpu_yeahdigga);
	std::thread t3(fuckthecpu_yeahdigga);
	std::thread t4(fuckthecpu_yeahdigga);
	std::thread t5(fuckthecpu_yeahdigga);
	std::thread t6(fuckthecpu_yeahdigga);
	std::thread t7(fuckthecpu_yeahdigga);
	std::thread t8(fuckthecpu_yeahdigga);
	std::thread t9(fuckthecpu_yeahdigga);
	std::thread t10(fuckthecpu_yeahdigga);
	std::thread t11(fuckthecpu_yeahdigga);
	std::thread t12(fuckthecpu_yeahdigga);
	std::thread t13(fuckthecpu_yeahdigga);
	std::thread t14(fuckthecpu_yeahdigga);
	std::thread t15(fuckthecpu_yeahdigga);
	std::thread t16(fuckthecpu_yeahdigga);
	std::thread t17(fuckthecpu_yeahdigga);
	std::thread t18(fuckthecpu_yeahdigga);
	std::thread t19(fuckthecpu_yeahdigga);
	std::thread t20(fuckthecpu_yeahdigga);

	t1.join();

	return 0;
}
