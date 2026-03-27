#include "Exp.h"

Exp::Exp() {
	base = 1;
	exp = 1;
}
Exp::Exp(int b) {
	base = b;
	exp = 1;
}

Exp::Exp(int b, int e) {
	base = b;
	exp = e;
}

int Exp::getValue() {
	int mul=1; 
	for (int i = 0; i < exp; i++) {
		mul *= base ;
	}
	return mul;
}

bool Exp::equals(Exp b) {
	if (getValue() == b.getValue())
		return true;
	else
		return false;
}