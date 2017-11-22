#include "./Exception.hpp"

namespace Guardog
{
	Exception::Exception()
	{
	}

	Exception::~Exception()
	{
	}

	const char* Exception::what() const
	{
		return GetMessage().c_str();
	}
}
