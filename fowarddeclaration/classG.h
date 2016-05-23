#pragma once

namespace NS_G{
	
	template<typename T>
	class classG
	{
	public:
		classG(){};
		~classG(){};
	};

	typedef classG<int> classGG;
	using classGGG = classGG;

}