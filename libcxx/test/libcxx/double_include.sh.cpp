//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// Test that we can include each header in two TU's and link them together.

// RUN: %{cxx} -c %s -o %t.first.o %{flags} %{compile_flags}
// RUN: %{cxx} -c %s -o %t.second.o -DWITH_MAIN %{flags} %{compile_flags}
// RUN: %{cxx} -o %t.exe %t.first.o %t.second.o %{flags} %{link_flags}
// RUN: %{run}

// Prevent <ext/hash_map> from generating deprecated warnings for this test.
#if defined(__DEPRECATED)
#    undef __DEPRECATED
#endif

////////////////////////////////////////////////////////////////////////////////
// BEGIN-GENERATED-HEADERS
////////////////////////////////////////////////////////////////////////////////

// clang-format off

// WARNING: This test was generated by generate_header_tests.py
// and should not be edited manually.

// Top level headers
#include <algorithm>
#include <any>
#include <array>
#ifndef _LIBCPP_HAS_NO_THREADS
#    include <atomic>
#endif
#ifndef _LIBCPP_HAS_NO_THREADS
#    include <barrier>
#endif
#include <bit>
#include <bitset>
#include <cassert>
#include <ccomplex>
#include <cctype>
#include <cerrno>
#include <cfenv>
#include <cfloat>
#include <charconv>
#include <chrono>
#include <cinttypes>
#include <ciso646>
#include <climits>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <clocale>
#endif
#include <cmath>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <codecvt>
#endif
#include <compare>
#include <complex>
#include <complex.h>
#include <concepts>
#include <condition_variable>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstdbool>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctgmath>
#include <ctime>
#include <ctype.h>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <errno.h>
#include <exception>
#include <execution>
#include <fenv.h>
#ifndef _LIBCPP_HAS_NO_FILESYSTEM_LIBRARY
#    include <filesystem>
#endif
#include <float.h>
#ifndef _LIBCPP_HAS_NO_INCOMPLETE_FORMAT
#    include <format>
#endif
#include <forward_list>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <fstream>
#endif
#include <functional>
#ifndef _LIBCPP_HAS_NO_THREADS
#    include <future>
#endif
#include <initializer_list>
#include <inttypes.h>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <iomanip>
#endif
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <ios>
#endif
#include <iosfwd>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <iostream>
#endif
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <istream>
#endif
#include <iterator>
#ifndef _LIBCPP_HAS_NO_THREADS
#    include <latch>
#endif
#include <limits>
#include <limits.h>
#include <list>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <locale>
#endif
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <locale.h>
#endif
#include <map>
#include <math.h>
#include <memory>
#ifndef _LIBCPP_HAS_NO_THREADS
#    include <mutex>
#endif
#include <new>
#include <numbers>
#include <numeric>
#include <optional>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <ostream>
#endif
#include <queue>
#include <random>
#ifndef _LIBCPP_HAS_NO_INCOMPLETE_RANGES
#    include <ranges>
#endif
#include <ratio>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <regex>
#endif
#include <scoped_allocator>
#ifndef _LIBCPP_HAS_NO_THREADS
#    include <semaphore>
#endif
#include <set>
#include <setjmp.h>
#ifndef _LIBCPP_HAS_NO_THREADS
#    include <shared_mutex>
#endif
#include <span>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <sstream>
#endif
#include <stack>
#include <stdbool.h>
#include <stddef.h>
#include <stdexcept>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <streambuf>
#endif
#include <string>
#include <string.h>
#include <string_view>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <strstream>
#endif
#include <system_error>
#include <tgmath.h>
#ifndef _LIBCPP_HAS_NO_THREADS
#    include <thread>
#endif
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <variant>
#include <vector>
#include <version>
#include <wchar.h>
#include <wctype.h>

// experimental headers
#if __cplusplus >= 201103L
#    include <experimental/algorithm>
#    if defined(__cpp_coroutines)
#        include <experimental/coroutine>
#    endif
#    include <experimental/deque>
#    ifndef _LIBCPP_HAS_NO_FILESYSTEM_LIBRARY
#        include <experimental/filesystem>
#    endif
#    include <experimental/forward_list>
#    include <experimental/functional>
#    include <experimental/iterator>
#    include <experimental/list>
#    include <experimental/map>
#    include <experimental/memory_resource>
#    include <experimental/propagate_const>
#    ifndef _LIBCPP_HAS_NO_LOCALIZATION
#        include <experimental/regex>
#    endif
#    include <experimental/set>
#    include <experimental/simd>
#    include <experimental/string>
#    include <experimental/type_traits>
#    include <experimental/unordered_map>
#    include <experimental/unordered_set>
#    include <experimental/utility>
#    include <experimental/vector>
#endif // __cplusplus >= 201103L

// extended headers
#include <ext/hash_map>
#include <ext/hash_set>

// clang-format on

////////////////////////////////////////////////////////////////////////////////
// END-GENERATED-HEADERS
////////////////////////////////////////////////////////////////////////////////

#if defined(WITH_MAIN)
int main(int, char**) { return 0; }
#endif
