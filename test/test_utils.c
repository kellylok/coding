#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main(int argc, char **argv)
{
	int ret = 0;
#ifdef TEST_SYSLOG
	USE_SYSLOG(argv[0]);
#endif

	LOGGING_INFO("%s\n", "This is normal information!");
	LOGGING_ERR("%s\n", "This is error!");

#ifdef TEST_FAFAL
	LOGGING_FAFAL("%s\n", "Goodbyb!");
#endif

	ret = atoi(argv[1]);
	LOGGING_ASSERT(ret, "%s\n", "It can't be zero.");
	while(1);
	return ret;
}
