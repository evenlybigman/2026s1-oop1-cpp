#ifndef EXP_H
#define EXP_H
class Exp {
	int base;
	int exp;
public:
	Exp();
	Exp(int b);
	Exp(int b, int e);
	int getValue();
	int getBase() { return base; }
	int getExp() { return exp;}
	bool equals(Exp b);
};

#endif