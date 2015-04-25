/* Copyright (C) 2015 Leetsoftwerx,

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#ifndef LOGIN_TYPE_HPP
#define LOGIN_TYPE_HPP

namespace leeterchat {

enum class login_method
{
    PASS,
    DEFAULT_REAL = login_method::PASS,
    DEFAULT,
    MSG_NICKSERV,
    NICKSERV,
    SASL,
    CHALLENGEAUTH,
    CUSTOM,
    SASL_EXTERNAL
};

}
#endif // LOGIN_TYPE_HPP
