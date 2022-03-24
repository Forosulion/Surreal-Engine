#pragma once
#include <stdint.h>
#include <assert.h>
#include <iostream>

namespace engine_name_placeholder
{
	//Vector 1
	template <typename T>
	struct vec1
	{
		union { T x, r, s; };
		vec1() {};
		vec1(const vec1<T>& rhs) { x = rhs.x; };
		vec1(T x) : x(x) {};
	};


	//Vector 2

	template <typename T>
	struct vec2
	{

	public:
		union { T x, r, s; };
		union { T y, b, t; };
		vec2() {};
		vec2(const vec2<T>& rhs) { x = rhs.x; y = rhs.y; };
		vec2(const vec1<T>& rhs, T y) : y(y) { x = rhs.x; };
		vec2(T X, T Y) : x(X) , y(Y) {};
		vec2(T x) : x(x), y(x) {};
	public:

		size_t length() { return 2; };


		///////////////////////// operator+ /////////////////////////////

		template<typename U>
		vec2<T> operator+(U c)
		{
			return vec2<T>(x + c, y + c);
		}

		vec2<T> operator+(const vec2<T>& rhs)
		{
			return vec2<T>(x + rhs.x, y + rhs.y);
		};

		vec2<T>& operator+=(const vec2<T>& rhs)
		{
			return *this = vec2<T>(x + rhs.x, y + rhs.y);
		};

		template <typename U>
		vec2<T>& operator+=(U c)
		{
			return *this = vec2<T>(x + c, y + c);
		};


		///////////////////////// operator- /////////////////////////////


		template<typename U>
		vec2<T> operator-(U c)
		{
			return vec2<T>(x - c, y - c);
		}

		vec2<T> operator-(const vec2<T>& rhs)
		{
			return vec2<T>(x - rhs.x, y - rhs.y);
		};

		vec2<T>& operator-=(const vec2<T>& rhs)
		{
			return *this = vec2<T>(x - rhs.x, y - rhs.y);
		};

		template <typename U>
		vec2<T>& operator-=(U c)
		{
			return *this = vec2<T>(x - c, y - c);
		};



		///////////////////////// operator* /////////////////////////////


		template<typename U>
		vec2<T> operator*(U c)
		{
			return vec2<T>(x * c, y * c);
		}

		vec2<T> operator*(const vec2<T>& rhs)
		{
			return vec2<T>(x * rhs.x, y * rhs.y);
		};

		vec2<T>& operator*=(const vec2<T>& rhs)
		{
			return *this = vec2<T>(x * rhs.x, y * rhs.y);
		};

		template <typename U>
		vec2<T>& operator*=(U c)
		{
			return *this = vec2<T>(x * c, y * c);
		};




		///////////////////////// operator/ /////////////////////////////


		template<typename U>
		vec2<T> operator/(U c)
		{
			return vec2<T>(x / c, y / c);
		}
		
		vec2<T> operator/(const vec2<T>& rhs)
		{
			return vec2<T>(x / rhs.x, y / rhs.y);
		};

		vec2<T>& operator/=(const vec2<T>& rhs)
		{
			return *this = vec2<T>(x / rhs.x, y / rhs.y);
		};

		template <typename U>
		vec2<T>& operator/=(U c)
		{
			return *this = vec2<T>(x / c, y / c);
		};


		///////////////////////// operator& /////////////////////////////


		template<typename U>
		vec2<T> operator&(U c)
		{
			return vec2<T>(x & c, y & c);
		}

		vec2<T> operator&(const vec2<T>& rhs)
		{
			return vec2<T>(x & rhs.x, y & rhs.y);
		};

		vec2<T>& operator&=(const vec2<T>& rhs)
		{
			return *this = vec2<T>(x & rhs.x, y & rhs.y);
		};

		template <typename U>
		vec2<T>& operator&=(U c)
		{
			return *this = vec2<T>(x & c, y & c);
		};

		///////////////////////// operator% /////////////////////////////


		template<typename U>
		vec2<T> operator%(U c)
		{
			return vec2<T>(x % c, y % c);
		}

		vec2<T> operator%(const vec2<T>& rhs)
		{
			return vec2<T>(x % rhs.x, y % rhs.y);
		};

		vec2<T>& operator%=(const vec2<T>& rhs)
		{
			return *this = vec2<T>(x % rhs.x, y % rhs.y);
		};

		template <typename U>
		vec2<T>& operator%=(U c)
		{
			return *this = vec2<T>(x % c, y % c);
		};


		///////////////////////// operator<< /////////////////////////////


		template<typename U>
		vec2<T> operator<<(U c)
		{
			return vec2<T>(x << c, y << c);
		}

		vec2<T> operator<<(const vec2<T>& rhs)
		{
			return vec2<T>(x << rhs.x, y << rhs.y);
		};

		vec2<T>& operator<<=(const vec2<T>& rhs)
		{
			return *this = vec2<T>(x << rhs.x, y << rhs.y);
		};

		template <typename U>
		vec2<T>& operator<<=(U c)
		{
			return *this = vec2<T>(x << c, y << c);
		};

		///////////////////////// operator>> /////////////////////////////


		template<typename U>
		vec2<T> operator>>(U c)
		{
			return vec2<T>(x >> c, y >> c);
		}

		vec2<T> operator>>(const vec2<T>& rhs)
		{
			return vec2<T>(x >> rhs.x, y >> rhs.y);
		};

		vec2<T>& operator>>=(const vec2<T>& rhs)
		{
			return *this = vec2<T>(x >> rhs.x, y >> rhs.y);
		};

		template <typename U>
		vec2<T>& operator>>=(U c)
		{
			return *this = vec2<T>(x >> c, y >> c);
		};

		///////////////////////// operator^ /////////////////////////////


		template<typename U>
		vec2<T> operator^(U c)
		{
			return vec2<T>(x ^ c, y ^ c);
		}

		vec2<T> operator^(const vec2<T>& rhs)
		{
			return vec2<T>(x ^ rhs.x, y ^ rhs.y);
		};

		vec2<T>& operator^=(const vec2<T>& rhs)
		{
			return *this = vec2<T>(x ^ rhs.x, y ^ rhs.y);
		};

		template <typename U>
		vec2<T>& operator^=(U c)
		{
			return *this = vec2<T>(x ^ c, y ^ c);
		};

		///////////////////////// operator| /////////////////////////////


		template<typename U>
		vec2<T> operator|(U c)
		{
			return vec2<T>(x | c, y | c);
		}

		vec2<T> operator|(const vec2<T>& rhs)
		{
			return vec2<T>(x | rhs.x, y | rhs.y);
		};

		vec2<T>& operator|=(const vec2<T>& rhs)
		{
			return *this = vec2<T>(x | rhs.x, y | rhs.y);
		};

		template <typename U>
		vec2<T>& operator|=(U c)
		{
			return *this = vec2<T>(x | c, y | c);
		};

		///////////////////////// misc operators /////////////////////////////
		vec2<T>& operator++()
		{
			++this->x;
			++this->y;
			return *this;
		}

		vec2<T>& operator--()
		{
			--this->x;
			--this->y;
			return *this;
		}

		T& operator[](size_t i)
		{
			if (i >= this->length())
			{
				std::cout << "ERROR: Vector subscript out of range!\n";
				assert(0);
			}
			return  (&this->x)[i];

		}

		vec2<T>& operator=(const vec2<T>& rhs)
		{
			this->x = rhs.x;
			this->y = rhs.y;
			return *this;
		}


		bool operator==(const vec2<T>& rhs)
		{
			return (this->x == rhs.x && this->y == rhs.y);
		}


		bool operator!=(const vec2<T>& rhs)
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

	//vec1
	typedef vec1<float> vec1f;
	typedef vec1<int32_t> vec1i;
	typedef vec1<double> vec1d;
	typedef vec1<uint32_t> vec1u;
	typedef vec1<bool> vec1b;

	//vec2
	typedef vec2<float> vec2f;
	typedef vec2<int32_t> vec2i;
	typedef vec2<double> vec2d;
	typedef vec2<uint32_t> vec2u;
	typedef vec2<bool> vec2b;
}