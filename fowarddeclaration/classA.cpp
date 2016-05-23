#include "stdafx.h"
#include "classA.h"


#include "classB.h"
#include "classC.h"
#include "classD.h"
#include "classE.h"
#include "classF.h"
#include "classG.h"

classA::classA()
{
	objB = new classB();
	objC = new NS_C::classC();
	objD = new classDD;
	objE = new classEE;
	objF = new classF<int>;
	objG = new NS_G::classGGG;
}


classA::~classA()
{
	delete objB;
	delete objC;
	delete objD;
	delete objE;
	delete objF;
	delete objG;
}
