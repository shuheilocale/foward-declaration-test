#pragma once


class classB;
namespace NS_C{
	class classC;
}
class classD;
typedef classD classDD;
class classE;
using classEE = classE;

template<typename T>
class classF;

namespace NS_G{
	template<typename T>
	class classG;
	typedef classG<int> classGG;
	using classGGG = classGG;
}

class classA
{
public:
	classA();
	~classA();

	classB *objB;
	NS_C::classC *objC;
	classDD *objD;
	classEE *objE;
	classF<int> *objF;
	NS_G::classGGG *objG;
};																									

