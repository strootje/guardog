#include "./ArgumentException.hpp"

namespace Guardog
{
	ArgumentException::ArgumentException( const std::string& name )
		: _name(name)
	{
	}

	ArgumentException::~ArgumentException()
	{
	}
}
