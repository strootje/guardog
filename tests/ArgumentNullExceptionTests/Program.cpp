#include "./ArgumentNullException.hpp"
#include <gtest/gtest.h>

TEST(ArgumentNullExceptionTests, ExceptionWhat_HasCorrectValue)
{
	// Arrange
	Guardog::ArgumentNullException exc("manager");

	// Act
	auto msg = exc.what();

	// Assert
	ASSERT_EQ("Argument manager is null", std::string(msg));
}

TEST(ArgumentNullExceptionTests, THROWIFNULL_ThrowsIfArgumentIsNull)
{
	// Arrange
	int* someInt = nullptr;

	// Act
	ASSERT_THROW(THROWIFNULL(someInt), Guardog::ArgumentNullException);

	// Assert
	// see: act
}

TEST(ArgumentNullExceptionTests, THROWIFNULL_DoesntThrowIfArgumentIsntNull)
{
	// Arrange
	int someInt = 8;
	int* someIntPtr = &someInt;

	// Act
	ASSERT_NO_THROW(THROWIFNULL(someIntPtr));

	// Assert
	// see: act
}
