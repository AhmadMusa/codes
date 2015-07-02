		// Fig. 27.1: exception.h
		// Class DivideByZeroException definition.
		#include <stdexcept> // stdexcept header file contains runtime_error
		using std::runtime_error; // standard C++ library class runtime_error

		// DivideByZeroException objects should be thrown by functions
		// upon detecting division-by-zero exceptions
		class DivideByZeroException : public runtime_error
		{
		public:
		   // constructor specifies default error message
		   DivideByZeroException::DivideByZeroException()
		      : runtime_error( "attempted to divide by zero" ) {}
		}; // end class DivideByZeroException

