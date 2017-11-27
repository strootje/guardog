#include "./ArgumentIncorrectTypeException.hpp"
#include <gtest/gtest.h>
#include <string>

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

TEST(ArgumentIncorrectTypeExceptionTests, THROW_IfNotBaseOf_ThrowsIfArgumentIsNotBaseOf)
{
	// Arrange
	Airplane spitfire;

	// Act
	ASSERT_THROW(THROW_IfNotBaseOf(spitfire, Animal, Airplane), Guardog::ArgumentIncorrectTypeException);

	// Assert
	// see: act
}

TEST(ArgumentIncorrectTypeExceptionTests, THROW_IfNotBaseOf_DoesntThrowIfArgumentIsBaseOf)
{
	// Arrange
	Dog rex;

	// Act
	ASSERT_NO_THROW(THROW_IfNotBaseOf(rex, Animal, Dog));

	// Assert
	// see: act
}
