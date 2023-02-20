//                     _       __ 
//  _ __  _ __ ___  __| | ___ / _|  
// | '_ \| '__/ _ \/ _` |/ _ \ |_   predef - boost predef enhancements
// | |_) | | |  __/ (_| |  __/  _|  ----------------------------------
// | .__/|_|  \___|\__,_|\___|_|    https://github.com/q-ptr/predef
// |_|                            
// 
// SPDX-FileCopyrightText: 2023 q-ptr
// SPDX-License-Identifier: MIT

#pragma once


#include <semver.hpp>


namespace qptr::predef
{

static inline const std::string           VERSION_NAME          = "qptr-predef";
static inline const std::string           VERSION_DESCRIPTION   = "boost predef enhancements";
static inline const std::string           VERSION_URL           = "https://github.com/q-ptr/predef";

static inline constexpr uint8_t           VERSION_MAJOR         = 0;
static inline constexpr uint8_t           VERSION_MINOR         = 0;
static inline constexpr uint8_t           VERSION_PATCH         = 1;
static inline constexpr auto              VERSION_PREREL_TYPE   = semver::prerelease::alpha;
static inline constexpr uint8_t           VERSION_PREREL_NUMBER = 1;

static inline constexpr semver::version   VERSION               = semver::version 
{
	VERSION_MAJOR, 
	VERSION_MINOR, 
	VERSION_PATCH, 
	VERSION_PREREL_TYPE, 
	VERSION_PREREL_NUMBER
};

}//namespace qptr::predef
