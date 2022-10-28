#include "pch.h"
#include "CppUnitTest.h"
#include "..\Project1\Cproceso.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Cproceso* obj1 = new Cproceso(5, 7);
			Cproceso* obj2 = new Cproceso(9, 11);
			Cproceso* obj3 = new Cproceso(0, 0);
			obj3->racional(*obj1, *obj2);
			obj1->imprimirObj(*obj1);
			obj2->imprimirObj(*obj2);
			obj3->imprimirObj(*obj3);

		}
	}
	;
}
