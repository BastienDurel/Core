////////////////////////////////////////////////////////////////////////////////
//! \file   StringUtils.hpp
//! \brief  Utility functions for formatting strings.
//! \author Chris Oldwood

// Check for previous inclusion
#ifndef CORE_STRINGUTILS_HPP
#define CORE_STRINGUTILS_HPP

#if _MSC_VER > 1000
#pragma once
#endif

#include <stdarg.h>

namespace Core
{

////////////////////////////////////////////////////////////////////////////////
// Format the string ala printf.

tstring fmtEx(const tchar* pszFormat, va_list args);

////////////////////////////////////////////////////////////////////////////////
// Format the string ala printf.

tstring fmt(const tchar* pszFormat, ...);

////////////////////////////////////////////////////////////////////////////////
//! Skip any leading whitespace.

template<typename First, typename Last>
First skipWhitespace(First first, Last last)
{
	while ( (first != last) && ((*first == TXT(' ')) || (*first == TXT('\t')) || (*first == TXT('\r')) || (*first == TXT('\n'))) )
		++first;

	return first;
}

////////////////////////////////////////////////////////////////////////////////
//! Format a value into a string.

template<typename T>
tstring format(const T& value);

////////////////////////////////////////////////////////////////////////////////
// Format a boolean value into a string.

template<>
tstring format(const bool& value);

////////////////////////////////////////////////////////////////////////////////
// Format a signed integer value into a string.

template<>
tstring format(const int& value);

////////////////////////////////////////////////////////////////////////////////
// Format an unsigned integer value into a string.

template<>
tstring format(const uint& value);

////////////////////////////////////////////////////////////////////////////////
// Format a signed long long integer value into a string.

template<>
tstring format(const longlong& value);

////////////////////////////////////////////////////////////////////////////////
// Format a unsigned long long integer value into a string.

template<>
tstring format(const ulonglong& value);

////////////////////////////////////////////////////////////////////////////////
//! Parse a value from a string.

template<typename T>
T parse(const tstring& buffer); // throw(ParseException)

////////////////////////////////////////////////////////////////////////////////
// Parse a boolean value from a string.

template<>
bool parse(const tstring& buffer); // throw(ParseException)

////////////////////////////////////////////////////////////////////////////////
// Parse a signed integer value from a string.

template<>
int parse(const tstring& buffer); // throw(ParseException)

////////////////////////////////////////////////////////////////////////////////
// Parse an unsigned integer value from a string.

template<>
uint parse(const tstring& buffer); // throw(ParseException)

////////////////////////////////////////////////////////////////////////////////
// Parse a signed long long integer value from a string.

template<>
longlong parse(const tstring& buffer); // throw(ParseException)

////////////////////////////////////////////////////////////////////////////////
// Parse a unsigned long long integer value from a string.

template<>
ulonglong parse(const tstring& buffer); // throw(ParseException)

////////////////////////////////////////////////////////////////////////////////
// Convert a string to upper case.

void makeUpper(tstring& string);

////////////////////////////////////////////////////////////////////////////////
// Create an upper case version of a string.

tstring createUpper(tstring string);

////////////////////////////////////////////////////////////////////////////////
// Convert a string to lower case.

void makeLower(tstring& string);

////////////////////////////////////////////////////////////////////////////////
// Create a lower case version of a string.

tstring createLower(tstring string);

////////////////////////////////////////////////////////////////////////////////
// Trim any leading whitespace from the string.

void trimLeft(tstring& string);

////////////////////////////////////////////////////////////////////////////////
// Trim any trailing whitespace from the string.

void trimRight(tstring& string);

////////////////////////////////////////////////////////////////////////////////
// Trim any leading or trailing whitespace from the string.

void trim(tstring& string);

////////////////////////////////////////////////////////////////////////////////
// Trim any leading or trailing whitespace from a copy of the string.

tstring trimCopy(tstring string);

//namespace Core
}

#endif // CORE_STRINGUTILS_HPP
