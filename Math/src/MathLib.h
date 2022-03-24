#pragma once

#include <cmath>
#include <stdint.h>
#include "Types.h"





namespace engine_name_placeholder::Math
{
	int basicMathOp();

	template<typename T>
	T dotProduct(vec2<T> v1, vec2<T> v2);
}