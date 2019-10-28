#pragma once

#include "Macro.h"

#define INTERFACE_BEGIN(name) \
class BS_API I##name abstract { \
	public:

#define INTERFACE_END };

#define INTERFACE_DEF(ret, name, ...) \
virtual ret name(__VA_ARGS__) noexcept = 0;

#define INTERFACE_CONST_DEF(ret, name, ...) \
virtual ret name(__VA_ARGS__) const noexcept = 0;

#define INTERFACE_TYPE_DEF(name, type) \
using name = type;