#pragma once
#include <memory>
namespace yunyin
{
	template<typename V, typename T>
	class Iter {
	public:
		Iter(V* arr, size_t idx)
		{
			arr_ = arr;
			idx_ = idx;
		}
		T& operator*()
		{
			return (*arr_)[idx_];
		}
		Iter& operator++()
		{
			idx_++;
			return *this;
		}
		bool operator!=(const Iter& rhs)
		{
			return  rhs.idx_ != this->idx_;
		}

	private:
		size_t idx_ = 0;
		V* arr_;
	};
}