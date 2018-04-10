#ifndef DRAW_H
#define DRAW_H

// MIT License
//
// Copyright (c) 2018 Michael Simpson
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include <QDate>

#include <list>
#include <map>
#include <vector>

class Draw
{
public:
	Draw(const QDate& drawDate, const std::vector<int>& numbers, int powerball)
	{
		_drawDate = drawDate;
		_numbers = numbers;
		_powerball = powerball;
		std::sort(_numbers.begin(), _numbers.end());
	}

	Draw(const Draw& copyMe)
	{
		_drawDate = copyMe._drawDate;
		_numbers = copyMe._numbers;
		_powerball = copyMe._powerball;
		std::sort(_numbers.begin(), _numbers.end());
	}


	QDate						_drawDate;
	std::vector<int>			_numbers;
	int							_powerball;
};

typedef std::list<Draw> Draws;

#endif // DRAW_H
