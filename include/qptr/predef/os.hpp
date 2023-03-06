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


#include <boost/predef/os.h>


#if defined(BOOST_OS_AIX_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_AIX_NAME
#elif defined(BOOST_OS_AMIGAOS_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_AMIGAOS_NAME
#elif defined(BOOST_OS_BEOS_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_BEOS_NAME
#elif defined(BOOST_OS_BSD_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_BSD_NAME
#elif defined(BOOST_OS_CYGWIN_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_CYGWIN_NAME
#elif defined(BOOST_OS_HAIKU_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_HAIKU_NAME
#elif defined(BOOST_OS_HPUX_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_HPUX_NAME
#elif defined(BOOST_OS_IOS_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_IOS_NAME
#elif defined(BOOST_OS_IRIX_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_IRIX_NAME
#elif defined(BOOST_OS_LINUX_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_LINUX_NAME
#elif defined(BOOST_OS_MACOS_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_MACOS_NAME
#elif defined(BOOST_OS_OS400_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_OS400_NAME
#elif defined(BOOST_OS_QNX_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_QNX_NAME
#elif defined(BOOST_OS_SOLARIS_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_SOLARIS_NAME
#elif defined(BOOST_OS_UNIX_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_UNIX_NAME
#elif defined(BOOST_OS_SVR4_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_SVR4_NAME
#elif defined(BOOST_OS_VMS_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_VMS_NAME
#elif defined(BOOST_OS_WINDOWS_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_WINDOWS_NAME
#elif defined(BOOST_OS_BSD_BSDI_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_BSD_BSDI_NAME
#elif defined(BOOST_OS_BSD_DRAGONFLY_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_BSD_DRAGONFLY_NAME
#elif defined(BOOST_OS_BSD_FREE_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_BSD_FREE_NAME
#elif defined(BOOST_OS_BSD_NET_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_BSD_NET_NAME
#elif defined(BOOST_OS_BSD_OPEN_AVAILABLE)
	#define QPTR_PREDEF_OS_NAME   BOOST_OS_BSD_OPEN_NAME
#else
	#define QPTR_PREDEF_OS_NAME   "<unknown-os>"
#endif
