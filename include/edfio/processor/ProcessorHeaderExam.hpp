//
// Copyright(c) 2017-present Iuri Dotta (dotta dot iuri at gmail dot com)
//
// This source code is licensed under the MIT license found in the
// LICENSE file in the root directory of this source tree.
//
// Official repository: https://github.com/idotta/edfio
//

#pragma once

#include "ProcessorBase.hpp"
#include "../Defs.hpp"
#include "../header/HeaderExam.hpp"

#include <fstream>

namespace edfio
{

	struct ProcessorHeaderExam: ProcessorBase<HeaderExam, HeaderExam>
	{
		ProcessorHeaderExam(std::ifstream &is) : m_is(is) {}

		FileErrc operator ()(const TypeIn &in, TypeOu &ou);

	private:
		std::ifstream &m_is;
	};

}

#include "impl/ProcessorHeaderExam.ipp"
