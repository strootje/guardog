#ifndef __GUARDOG__EXCEPTION__H__
#define __GUARDOG__EXCEPTION__H__

#include <exception>
#include <string>

namespace Guardog
{
	/**
	 * Base exception class within Guardog
	 */
	class Exception : public std::exception
	{
	public:
		/**
		 * Constructor
		 */
		Exception();

		/**
		 * Destructor
		 */
		virtual ~Exception();

		/**
		 * Implementation from std::exception::what()
		 * \returns  the message for the exception
		 */
		const char* what() const;

		/**
		 * Returns the message for the exception
		 */
		virtual const std::string GetMessage() const = 0;
	};
}

#endif
