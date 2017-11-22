#ifndef __GUARDOG__ARGUMENTEXCEPTION__H__
#define __GUARDOG__ARGUMENTEXCEPTION__H__

#include "./Exception.hpp"
#include <string>

namespace Guardog
{
	/**
	 * Base class for all argument exceptions
	 */
	class ArgumentException : public Exception
	{
	protected:
		/**
		 * The name of the argument
		 */
		const std::string _name;

	public:
		/**
		 * Constructor
		 */
		ArgumentException(const std::string& name);

		/**
		 * Destructor
		 */
		virtual ~ArgumentException();

		/**
		 * what method implemented for std::exception
		 * \returns  string with the message of the exception
		 */
		virtual const std::string GetMessage() const = 0;
	};
}

#endif
