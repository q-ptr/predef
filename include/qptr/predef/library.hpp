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


#include <boost/predef/library.h>


#if defined(BOOST_LIB_C_CLOUDABI_AVAILABLE)
	#define QPTR_PREDEF_LIBRARY_NAME   BOOST_LIB_C_CLOUDABI_NAME
#elif defined(BOOST_LIB_C_GNU_AVAILABLE)
	#define QPTR_PREDEF_LIBRARY_NAME   BOOST_LIB_C_GNU_NAME
#elif defined(BOOST_LIB_C_UC_AVAILABLE)
	#define QPTR_PREDEF_LIBRARY_NAME   BOOST_LIB_C_UC_NAME
#elif defined(BOOST_LIB_C_VMS_AVAILABLE)
	#define QPTR_PREDEF_LIBRARY_NAME   BOOST_LIB_C_VMS_NAME
#elif defined(BOOST_LIB_C_ZOS_AVAILABLE)
	#define QPTR_PREDEF_LIBRARY_NAME   BOOST_LIB_C_ZOS_NAME
#elif defined(BOOST_LIB_STD_CXX_AVAILABLE)
	#define QPTR_PREDEF_LIBRARY_NAME   BOOST_LIB_STD_CXX_NAME
#elif defined(BOOST_LIB_STD_DINKUMWARE_AVAILABLE)
	#define QPTR_PREDEF_LIBRARY_NAME   BOOST_LIB_STD_DINKUMWARE_NAME
#elif defined(BOOST_LIB_STD_COMO_AVAILABLE)
	#define QPTR_PREDEF_LIBRARY_NAME   BOOST_LIB_STD_COMO_NAME
#elif defined(BOOST_LIB_STD_MSIPL_AVAILABLE)
	#define QPTR_PREDEF_LIBRARY_NAME   BOOST_LIB_STD_MSIPL_NAME
#elif defined(BOOST_LIB_STD_MSL_AVAILABLE)
	#define QPTR_PREDEF_LIBRARY_NAME   BOOST_LIB_STD_MSL_NAME
#elif defined(BOOST_LIB_STD_RW_AVAILABLE)
	#define QPTR_PREDEF_LIBRARY_NAME   BOOST_LIB_STD_RW_NAME
#elif defined(BOOST_LIB_STD_SGI_AVAILABLE)
	#define QPTR_PREDEF_LIBRARY_NAME   BOOST_LIB_STD_SGI_NAME
#elif defined(BOOST_LIB_STD_GNU_AVAILABLE)
	#define QPTR_PREDEF_LIBRARY_NAME   BOOST_LIB_STD_GNU_NAME
#elif defined(BOOST_LIB_STD_STLPORT_AVAILABLE)
	#define QPTR_PREDEF_LIBRARY_NAME   BOOST_LIB_STD_STLPORT_AVAILABLE_NAME
#elif defined(BOOST_LIB_STD_IBM_AVAILABLE)
	#define QPTR_PREDEF_LIBRARY_NAME   "<unknown-library>"
#endif
