#pragma once
#include "stdafx.h"

class IMemoryHandler
{
public:
	virtual uint8_t Read(uint32_t addr) = 0;
	virtual void Write(uint32_t addr, uint8_t value) = 0;

	//virtual void GetMemoryRanges(MemoryRanges &ranges) = 0;
	//virtual uint8_t PeekRAM(uint16_t addr) { return 0; }

	virtual ~IMemoryHandler() {}
};