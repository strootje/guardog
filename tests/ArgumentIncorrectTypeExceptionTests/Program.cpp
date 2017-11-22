#include "./ArgumentIncorrectTypeException.hpp"
#include <gtest/gtest.h>

class Animal {};
class Dog : public Animal {};
class Airplane {};

TEST(ArgumentIncorrectTypeExceptionTests, ExceptionWhat_HasCorrectValue)
{
	// Arrange
	Guardog::ArgumentIncorrectTypeException exc("manager", "Animal", "Dog");

	// Act
	auto msg = exc.what();

	// Assert
	ASSERT_EQ("Argument manager is of type Dog but expected type Animal", std::string(msg));
}

TEST(ArgumentIncorrectTypeExceptionTests, THROWIFNOTBASEOF_ThrowsIfArgumentIsNotBaseOf)
{
	// Arrange
	Airplane spitfire;

	// Act
	ASSERT_THROW(THROWIFNOTBASEOF(spitfire, Animal, Airplane), Guardog::ArgumentIncorrectTypeException);

	// Assert
	// see: act
}

TEST(ArgumentIncorrectTypeExceptionTests, THROWIFNOTBASEOF_DoesntThrowIfArgumentIsBaseOf)
{
	// Arrange
	Dog rex;

	// Act
	ASSERT_NO_THROW(THROWIFNOTBASEOF(rex, Animal, Dog));

	// Assert
	// see: act
}
