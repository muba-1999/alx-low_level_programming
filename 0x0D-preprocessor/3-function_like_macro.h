#ifndef ABS
#define ABS(x)
#if (x < 0)
	#define ABS(x) ((x) * (-1))
#else
	#define ABS(x) x
#endif

#endif
