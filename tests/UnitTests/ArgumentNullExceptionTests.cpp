#include "./ArgumentNullException.hpp"
#include <gtest/gtest.h>
#include <string>

TEST(ArgumentNullExceptionTests, ExceptionWhat_HasCorrectValue)
{
	// Arrange
	Guardog::ArgumentNullException exc("manager");

	// Act
	auto msg = exc.what();

	// Assert
	ASSERT_EQ("Argument manager is null", std::string(msg));
}

TEST(ArgumentNullExceptionTests, THROW_IfNull_ThrowsIfArgumentIsNull)
{
	// Arrange
	int* someInt = nullptr;

	// Act
	ASSERT_THROW(THROW_IfNull(someInt), Guardog::ArgumentNullException);

	// Assert
	// see: act
}

TEST(ArgumentNullExceptionTests, THROW_IfNull_DoesntThrowIfArgumentIsntNull)
{
	// Arrange
	int someInt = 8;
	int* someIntPtr = &someInt;

	// Act
	ASSERT_NO_THROW(THROW_IfNull(someIntPtr));

	// Assert
	// see: act
}
