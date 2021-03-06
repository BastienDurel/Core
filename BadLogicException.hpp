////////////////////////////////////////////////////////////////////////////////
//! \file   BadLogicException.hpp
//! \brief  The BadLogicException class declaration.
//! \author Chris Oldwood

// Check for previous inclusion
#ifndef CORE_BADLOGICEXCEPTION_HPP
#define CORE_BADLOGICEXCEPTION_HPP

#include "Exception.hpp"

#if _MSC_VER > 1000
#pragma once
#endif

namespace Core
{

////////////////////////////////////////////////////////////////////////////////
//! The exception type thrown for errors that are the result of incorrect
//! program logic. It is analogous to std::logic_error.

class BadLogicException : public Exception
{
public:
	//! Construction from a string containing the details.
	BadLogicException(const tstring& details);

	//! Destructor.
	virtual ~BadLogicException() throw();
};

////////////////////////////////////////////////////////////////////////////////
//! Construction from a string containing the details.

inline BadLogicException::BadLogicException(const tstring& details)
	: Exception(details)
{
}

////////////////////////////////////////////////////////////////////////////////
//! Destructor.

inline BadLogicException::~BadLogicException() throw()
{
}

//namespace Core
}

#endif // CORE_BADLOGICEXCEPTION_HPP
