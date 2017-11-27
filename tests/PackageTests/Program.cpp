#include <Guardog/Guard.hpp>
#include <iostream>

int main( int argc, char* argv[] )
{
	try
	{
		int* test = nullptr;
		THROW_IfNull(test);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;;
	}

	return EXIT_SUCCESS;
}
