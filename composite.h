#ifndef COMPOSITE_H
#define COMPOSITE_H
#include "component.h"

using namespace std;

class composite : public Base{
	protected:
		Base* left;
		Base* right;
	public:
 		virtual double evaluate() = 0;
};

class Op : public Base{
	public:
		Op(double op);
		double evaluate();
	private:
		double op;
};

class Add : public composite{
	public:
		Add(Base* left, Base* right);
		double evaluate();
};

class Add : public composite{
	public:
		Add(Base* left, Base* right);
		double evaluate();
};

class Mult : public composite{
	public:
		Mult(Base* left, Base* Right);
		double evaluate();
};

class Sqr : public composite{
	public:
		Sqr(Base* left);
		double evaluate();
};

class Sub : public composite {
	public:
		Sub(Base* left, Base* right);
		double evaluate();
};

class Absolute: public Base
{
	protected:
		Base* child;
	public:
		Absolute(): child(NULL) {}
		Absolute(Base* number): child(number) {}
		double evaluate()
		{
			return fabs(child->evaluate());
		}
};

class Ceiling: public Base
{
	protected:
		Base* child;
	public:
		Ceiling(): child(NULL) {}
		Ceiling(Base* number): child(number) {}
		double evaluate()
		{
			return ceil(child->evaluate());
		}
};

class Floor: public Base
{
	protected:
		Base* child;
	public:
		Floor(): child(NULL) {}
		Floor(Base* number): child(number) {}
		double evaluate()
		{
			return floor(child->evaluate());
		}
};

#endif
