// Copyright (C) 2004 Aldratech Ltd. See the LICENSE file for licensing information.
/*
 This file is part of hessiancpp.

    hessiancpp is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.

    hessiancpp is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with hessiancpp; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
#ifndef HESSIAN_STRING_INPUT_STREAM_H
#define HESSIAN_STRING_INPUT_STREAM_H

#include "input_stream.h"

#include <string>

namespace std {}

using namespace std;
using namespace hessian::exceptions;

namespace hessian {
	/// A string-based input stream.
	class string_input_stream : public input_stream {
	public:
		/// Constructor.
		string_input_stream(const string& str);
		/// Destructor.
		virtual ~string_input_stream() throw();
		/// EOF test.
		virtual bool eof() throw(io_exception);
		/// Reads next character from stream.
		virtual int read() throw(io_exception);
	private:
		string str_;
		string::size_type pointer_;
		string::size_type length_;
	};
}

#endif
