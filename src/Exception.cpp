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
		const auto& message = GetMessage();

		char* copied = new char[message.length() + 1];
		std::strcpy(copied, message.c_str());

		return copied;
	}
}
