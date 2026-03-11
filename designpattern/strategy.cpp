#include<iostream>
using namespace std;

class Strategy
{
public: virtual void AlgorithmInterface() = 0;
};
class ConcreteStrategyA :public Strategy
{
public: void AlgorithmInterface()
{
	cout << "Inside ConcreteStrategyA::AlogrithmInterface" << endl;
}
};
class ConcreteStrategyB :public Strategy
{
public: void AlgorithmInterface()
{
	cout << "Inside ConcreteStrategyB::AlogrithmInterface" << endl;
}
};
class ConcreteStrategyC :public Strategy
{
public: void AlgorithmInterface()
{
	cout << "Inside ConcreteStrategyC::AlogrithmInterface" << endl;
}
};
class Context
{
	Strategy* strategy;
public: void SetStrategy(Strategy* obj)
{
	strategy = obj;
}
	  Strategy* GetStrategy()
	  {
		  return strategy;
	  }
	  void ContextInterface()
	  {
		  strategy->AlgorithmInterface();
	  }
};
int main()
{
	Context* context = new Context();

	ConcreteStrategyA* conStraA = new ConcreteStrategyA();
	context->SetStrategy(conStraA);
	context->ContextInterface();

	//ConcreteStrategyB *conStraB = new ConcreteStrategyB();
	ConcreteStrategyB conStraB;
	context->SetStrategy(&conStraB);
	context->ContextInterface();

	ConcreteStrategyC* conStraC = new ConcreteStrategyC();
	context->SetStrategy(conStraC);
	context->ContextInterface();

	return 0;
}

