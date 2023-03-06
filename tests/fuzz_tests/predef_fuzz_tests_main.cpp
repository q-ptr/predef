///                     _       __ 
///  _ __  _ __ ___  __| | ___ / _|  
/// | '_ \| '__/ _ \/ _` |/ _ \ |_   predef - boost predef enhancements
/// | |_) | | |  __/ (_| |  __/  _|  ----------------------------------
/// | .__/|_|  \___|\__,_|\___|_|    https://github.com/q-ptr/predef
/// |_|                            
/// 
/// SPDX-FileCopyrightText: 2023 q-ptr
/// SPDX-License-Identifier: MIT

#include <cstdint>


extern "C" int LLVMFuzzerInitialize(int *argc, char ***argv)
{
	(void) argc;
	(void) argv;

	return 0;
}

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t data_size)
{
	(void) data;
	(void) data_size;

	return 0;
}

//temporary...
int main()
{
	return 0;
}
