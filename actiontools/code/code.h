/*
	Actionaz
	Copyright (C) 2008-2010 Jonathan Mercier-Ganady

	Actionaz is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	Actionaz is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program. If not, see <http://www.gnu.org/licenses/>.

	Contact : jmgr@jmgr.info
*/

#ifndef CODE_H
#define CODE_H

#include "actiontools_global.h"

#include <QString>
#include <QByteArray>

namespace Code
{
	class ACTIONTOOLSSHARED_EXPORT Code
	{
	public:
		enum Encoding
		{
			Native,
			Ascii,
			Latin1,
			UTF8,
		};
		
		static QByteArray toEncoding(const QString &string, Encoding encoding);
		static QString fromEncoding(const QByteArray &byteArray, Encoding encoding);
	};
}

#endif // CODE_H