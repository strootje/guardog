#ifndef __GUARDOG__EXCEPTION__H__
#define __GUARDOG__EXCEPTION__H__

#include <exception>
#include <string>

namespace Guardog
{
	/**
	 * Base exception class
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
		 * Method used by std::exception
		 * See std::exception::what()
		 * \returns  The exception message
		 */
		const char* what() const;

		/**
		 * what method implemented for std::exception
		 * \returns  The exception message
		 */
		virtual const std::string GetMessage() const = 0;
	};
}

#endif
