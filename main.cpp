#include "House.h";

int main()
{
	// Ap 22
	Person Miller = "Nehemiah Miller";
	Person Bell = "Persephone Bell";
	Person Patterson = "Zakary Patterson";

	Apartment Ap22{ Miller, Bell, Patterson };


	// Ap 23

	Person Brooks = "Violet Brooks";
	Person Adams = "Damon Adams ";
	Person Roberts = "Tatum Roberts";

	Apartment Ap23{ Brooks, Adams, Roberts };


	// Ap 24

	Person Martinez = "Juliana Martinez"; 
	Person Richardson = "Tyrone Richardson";

	Apartment Ap24{ Martinez, Richardson };

	House TwoFlow
	{
		Ap22, Ap23, Ap24
	};

	House OneFlow = TwoFlow;

	OneFlow.ShowHouse();
}