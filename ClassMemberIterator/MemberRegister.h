#pragma once
#include <any>
#include <string>
#include <vector>
#include "Iterator.h"

namespace yunyin
{
	class MemberRegister
	{
	public:
		using iterator = Iter<std::vector<std::any>, std::any>;
	public:
		iterator begin() { return iterator(&members, 0); }
		iterator end() { return iterator(&members, members.size()); }
	public:
		MemberRegister() = default;
	public:
		void helpRegis()
		{
			regis();
		}
		template<typename T>
		T getMem(std::any i)
		{
			
		}
	protected:
		virtual void regis() = 0;

		template <typename T>
		void regisMem(T mem)
		{
			members.push_back(std::any(mem));
			this->memName.push_back(typeid(mem).name());
		}

	private:
		std::vector<std::any> members;
		std::vector<std::string> memName;
	};

}

