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

#ifndef IRCNETWORK_HPP
#define IRCNETWORK_HPP

#include <string>
#include <vector>
#include "login_type.hpp"
namespace leeterchat {


struct ircnetwork
{
    std::string friendlyName;
    std::string nick;
    std::string nick2;
    std::string username;
    std::string realname;
    std::string password;
    std::string comment;
    std::string encoding;
    std::vector<std::string> servers;
    std::vector<std::string> commands;
    std::vector<std::string> favorite_channels;
    login_method logintype;

public:
    explicit ircnetwork(std::string friendlyName);
};

}

#endif // IRCNETWORK_HPP
