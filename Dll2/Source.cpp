#include "pch.h"

extern "C" {
	class DoIt {
	public:
		int do_something(int a, int b) {
			return a+b;
		}
	};
}