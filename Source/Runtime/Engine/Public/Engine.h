#pragma once

#include <vector>
#include "Core.h"

class ENGINE_API Engine final
{
public:
	Engine() noexcept = default;

	Engine(const Engine&) = delete;
	Engine(Engine&&) noexcept = delete;

	Engine& operator=(const Engine&) = delete;
	Engine& operator=(Engine&&) noexcept = delete;

	~Engine() = default;

	[[nodiscard]] int32 Init() noexcept;
	[[nodiscard]] int32 Run() noexcept;
	void Release() noexcept;

private:

private:
	Timer timer;

	class WindowManager* window;
};
