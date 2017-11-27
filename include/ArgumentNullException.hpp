#ifndef __GUARDOG__ARGUMENTNULLEXCEPTION__H__
#define __GUARDOG__ARGUMENTNULLEXCEPTION__H__

#include "./ArgumentException.hpp"
#include <string>

#define GUARDOG_THROW_IfNull(arg) if (arg == nullptr) { \
	throw Guardog::ArgumentNullException(#arg); }
	
#ifndef __EXPLICIT__
	#define THROW_IfNull(arg) GUARDOG_THROW_IfNull(arg)
#endif

namespace Guardog
{
	/**
	 * Exception indicating that the argument is null
	 */
	class ArgumentNullException : public ArgumentException
	{
	public:
		/**
		 * Constructor
		 * \param  name  The name of the argument
		 */
		ArgumentNullException(const std::string& name);

		/**
		 * Exception message builder
		 * \returns  The message of the exception
		 */
		const std::string GetMessage() const;
	};
}

#endif
