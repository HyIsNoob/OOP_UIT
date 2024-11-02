#pragma once
#include "CDiemKhongGian.h"

class CHinhCau
{
	private:
		CDiemKhongGian I;
		float R;
	public:
		CHinhCau();
		CHinhCau(CDiemKhongGian, float);
		CHinhCau(const CHinhCau&);
		~CHinhCau();
};

