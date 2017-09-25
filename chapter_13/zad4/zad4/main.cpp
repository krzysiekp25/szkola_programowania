#include "VintagePort.h"

int main()
{
	VintagePort test("Brand nejm", 10, "slodkie", 1998);
	test.Show();
	test -= 5;
	test.Show();
	test -= 6;
	test.Show();
	system("pause");
	return 0;
}