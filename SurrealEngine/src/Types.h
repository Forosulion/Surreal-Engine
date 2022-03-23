#pragma once
#include <stdint.h>


namespace engine_name_placeholder
{
	//Vector 2

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

		template <typename U>
		vec2<T> operator/(U c)
		{
			return vec2<T>(x / c, y / c);
		};

		template <typename U>
		vec2<T>& operator/=(U c)
		{
			return *this = vec2<T>(x / c, y / c);
		};


		template <typename T>
		vec2<T> operator=(const vec2<T>& rhs)
		{
			this->x = rhs.x;
			this->y = rhs.y;
			return *this;
		}

		template <typename T>
		vec2<T> operator==(const vec2<T>& rhs)
		{
			return (this->x == rhs.x && this->y == rhs.y);
		}

		template <typename T>
		vec2<T> operator!=(const vec2<T>& rhs)
		{
			return (this->x != rhs.x || this->y != rhs.y);
		}

	};


	//Vector 3

	struct vec3
	{
		float x, y, z;
	};
	

	//Vector 4

	struct vec4
	{
		float x, y, z, w;
	};







	typedef vec2<float> vec2f;
	typedef vec2<int32_t> vec2i;
	typedef vec2<double> vec2d;
	typedef vec2<uint32_t> vec2u;
	typedef vec2<bool> vec2b;
}