/* See LICENSE file for copyright and license details. */
#include <stdio.h>
#include <time.h>

#include "../slstatus.h"
#include "../util.h"

const char *
datetime(const char *fmt)
{
	time_t t;

	t = time(NULL);
	// strftime：格式化时间
	if (!strftime(buf, sizeof(buf), fmt, localtime(&t))) {
		warn("strftime: Result string exceeds buffer size");
		return NULL;
	}

	return buf;
}
