
#include <fmt/core.h>
#include <qptr/predef/version.hpp>
#include <qptr/predef/architecture.hpp>
#include <qptr/predef/compiler.hpp>
#include <qptr/predef/configuration.hpp>
#include <qptr/predef/library.hpp>
#include <qptr/predef/os.hpp>
#include <qptr/predef/platform.hpp>


int main()
{
	fmt::print("qptr::predef::VERSION          : {}\n", qptr::predef::VERSION.to_string());
	fmt::print("QPTR_PREDEF_ARCHITECTURE_NAME  : {}\n", QPTR_PREDEF_ARCHITECTURE_NAME);
	fmt::print("QPTR_PREDEF_COMPILER_NAME      : {}\n", QPTR_PREDEF_COMPILER_NAME);
	fmt::print("QPTR_PREDEF_CONFIGURATION_NAME : {}\n", QPTR_PREDEF_CONFIGURATION_NAME);
	fmt::print("QPTR_PREDEF_LIBRARY_NAME       : {}\n", QPTR_PREDEF_LIBRARY_NAME);
	fmt::print("QPTR_PREDEF_OS_NAME            : {}\n", QPTR_PREDEF_OS_NAME);
	fmt::print("QPTR_PREDEF_PLATFORM_NAME      : {}\n", QPTR_PREDEF_PLATFORM_NAME);

	return 0;
}
