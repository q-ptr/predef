
#include <qptr/predef/version.hpp>
#include <qptr/predef/architecture.hpp>
#include <qptr/predef/compiler.hpp>
#include <fmt/core.h>


int main()
{
	fmt::print("qptr::predef::VERSION         : {}\n", qptr::predef::VERSION.to_string());
	fmt::print("QPTR_PREDEF_ARCHITECTURE_NAME : {}\n", QPTR_PREDEF_ARCHITECTURE_NAME);
	fmt::print("QPTR_PREDEF_COMPILER_NAME     : {}\n", QPTR_PREDEF_COMPILER_NAME);

	return 0;
}
