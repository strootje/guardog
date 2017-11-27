#include "./ArgumentNullException.hpp"

namespace Guardog
{
	ArgumentNullException::ArgumentNullException(const std::string& name)
		: ArgumentException(name)
	{
	}
	
	const std::string ArgumentNullException::GetMessage() const
	{
		return ("Argument " + _name + " is null");
	}
}
