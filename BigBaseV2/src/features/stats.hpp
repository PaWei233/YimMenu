#pragma once
#include "natives.hpp"
#include "script.hpp"
#include "fiber_pool.hpp"

namespace big::features
{
	class stats
	{
	public:
		static void max_stats(int character_index);
		static void unlock_achievements();
		static void unlock_all();
	};
}