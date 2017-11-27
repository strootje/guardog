#include "./ArgumentIncorrectTypeException.hpp"

namespace Guardog
{
	ArgumentIncorrectTypeException::ArgumentIncorrectTypeException(const std::string& name, const std::string& expected, const std::string& actual)
		: ArgumentException(name)
		, _expected(expected)
		, _actual(actual)
	{
	}

	const std::string ArgumentIncorrectTypeException::GetMessage() const
	{
		return ("Argument " + _name + " is of type " + _actual + " but expected type " + _expected);
	}
}
