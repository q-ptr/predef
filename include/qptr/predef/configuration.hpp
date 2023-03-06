///                     _       __ 
///  _ __  _ __ ___  __| | ___ / _|  
/// | '_ \| '__/ _ \/ _` |/ _ \ |_   predef - boost predef enhancements
/// | |_) | | |  __/ (_| |  __/  _|  ----------------------------------
/// | .__/|_|  \___|\__,_|\___|_|    https://github.com/q-ptr/predef
/// |_|                            
/// 
/// SPDX-FileCopyrightText: 2023 q-ptr
/// SPDX-License-Identifier: MIT

#pragma once


#if defined(_DEBUG) || defined(DEBUG)
	#define QPTR_PREDEF_CONFIGURATION_DEBUG_AVAILABLE
	#define QPTR_PREDEF_CONFIGURATION_DEBUG_NAME          "Debug"
#else
	#define QPTR_PREDEF_CONFIGURATION_RELEASE_AVAILABLE
	#define QPTR_PREDEF_CONFIGURATION_RELEASE_NAME        "Release"
#endif

#if defined(QPTR_PREDEF_CONFIGURATION_DEBUG_AVAILABLE)
	#define QPTR_PREDEF_CONFIGURATION_NAME   QPTR_PREDEF_CONFIGURATION_DEBUG_NAME
#elif defined(QPTR_PREDEF_CONFIGURATION_RELEASE_AVAILABLE)
	#define QPTR_PREDEF_CONFIGURATION_NAME   QPTR_PREDEF_CONFIGURATION_RELEASE_NAME
#else
	#define QPTR_PREDEF_CONFIGURATION_NAME   "<unknown-configuration>"
#endif
