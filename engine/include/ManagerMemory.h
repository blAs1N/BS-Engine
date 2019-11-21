#pragma once

#include "Core.h"
#include <cstdlib>

namespace BE
{
	class BS_API ManagerMemory final {
	public:
		constexpr ManagerMemory() noexcept
			: startMemory{ nullptr },
			curMemory{ nullptr },
			maxSize{ 0 } {}

		inline void Init(const size_t inSize) noexcept
		{
			startMemory = curMemory = static_cast<Uint8*>(std::malloc(inSize));
			maxSize = inSize;
		}

		inline void Release() noexcept
		{
			std::free(startMemory);
		}

		template <class ManagerType>
		ManagerType* Allocate() noexcept
		{
			auto tmp{ curMemory };
			curMemory += sizeof(ManagerType);
			return tmp;
		}

	private:
		Uint8* startMemory;
		Uint8* curMemory;
		size_t maxSize;
	};
}