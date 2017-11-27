#ifndef __GUARDOG__ARGUMENTINCORRECTTYPEEXCEPTION__H__
#define __GUARDOG__ARGUMENTINCORRECTTYPEEXCEPTION__H__

#include "./ArgumentException.hpp"
#include <string>
#include <type_traits>

#define GUARDOG_THROW_IfNotBaseOf(arg, expected, actual) if (!std::is_base_of<expected, actual>::value) { \
	throw Guardog::ArgumentIncorrectTypeException(#arg, #expected, #actual); }

#ifndef __EXPLICIT__
	#define THROW_IfNotBaseOf(arg, expected, actual) GUARDOG_THROW_IfNotBaseOf(arg, expected, actual)
#endif

namespace Guardog
{
	/**
	 * Exception indicating that the argument is of an incorrect type
	 */
	class ArgumentIncorrectTypeException : public ArgumentException
	{
	private:
		/**
		 * The expected type of the argument
		 */
		const std::string _expected;
		
		/**
		 * The actual type of the argument
		 */
		const std::string _actual;

	public:
		/**
		 * Constructor
		 * \param  name      The name of the argument
		 * \param  expected  The expected type of the argument
		 * \param  actual    The actual type of the argument
		 */
		ArgumentIncorrectTypeException(const std::string& name, const std::string& expected, const std::string& actual);

		/**
		 * Exception message builder
		 * \returns  The message of the exception
		 */
		const std::string GetMessage() const;
	};
}

#endif
