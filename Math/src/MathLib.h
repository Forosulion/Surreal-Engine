#pragma once

#include <cmath>





namespace engine_name_placeholder::Math
{
	

	template <typename T>
	struct vec2
	{
		union { T x, r; };
		union { T y, b; };
		vec2() {};
		vec2(const vec2<T>& rhs) { x = rhs.x; y = rhs.y; };
		vec2(T X, T Y) { x = X; y = Y; };
	public:

		template <typename T>
		vec2<T> operator+(const vec2<T>& rhs)
		{
			return vec2<T>(x + rhs.x, y + rhs.y);
		};

		template <typename T>
		vec2<T> operator+=(const vec2<T>& rhs)
		{
			return *this = vec2<T>(x + rhs.x, y + rhs.y);
		};

		template <typename T>
		vec2<T> operator-(const vec2<T>& rhs)
		{
			return vec2<T>(x - rhs.x, y - rhs.y);
		};

		template <typename T>
		vec2<T> operator-=(const vec2<T>& rhs)
		{
			return *this = vec2<T>(x - rhs.x, y - rhs.y);
		};

		template <typename U>
		vec2<T> operator*(U c)
		{
			return vec2<T>(x * c, y * c);
		};

		template <typename U>
		vec2<T>& operator*=(U c)
		{
			return *this = vec2<T>(x * c, y * c);
		};

		template <typename T>
		vec2<T> operator=(const vec2<T>& rhs)
		{
			this->x = rhs.x;
			this->y = rhs.y;
			return *this;
		}

	};

	struct vec3
	{
		float x, y, z;
	};

	struct vec4
	{
		float x, y, z, w;
	};
	int basicMathOp();

	typedef vec2<float> fvec2;

}