///                     _       __ 
///  _ __  _ __ ___  __| | ___ / _|  
/// | '_ \| '__/ _ \/ _` |/ _ \ |_   predef - boost predef enhancements
/// | |_) | | |  __/ (_| |  __/  _|  ----------------------------------
/// | .__/|_|  \___|\__,_|\___|_|    https://github.com/q-ptr/predef
/// |_|                            
/// 
/// SPDX-FileCopyrightText: 2023 q-ptr
/// SPDX-License-Identifier: MIT

#include <catch_amalgamated.hpp>
#include <fmt/core.h>
#include <qptr/predef/version.hpp>
#include <qptr/predef/architecture.hpp>
#include <qptr/predef/compiler.hpp>
#include <qptr/predef/configuration.hpp>
#include <qptr/predef/library.hpp>
#include <qptr/predef/os.hpp>
#include <qptr/predef/platform.hpp>


int main(int argc, char *argv[])
{
	int   nResult = Catch::Session().run(argc, argv);

	return nResult;
}

TEST_CASE("predef", "[predef]")
{
	REQUIRE(1 == 1);

	SECTION("test_section")
	{
		REQUIRE(1 == sizeof(uint8_t));
	}
}
