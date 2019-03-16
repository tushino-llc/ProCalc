﻿/*
ProCalc — powerful multifunctional calculator
Copyright © 2019 Tushino Software LLC

This file is part of ProCalc.

ProCalc is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

ProCalc is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with ProCalc. If not, see <https://www.gnu.org/licenses/>.
*/
#ifndef TeoriaVer_h
#define TeoriaVer_h
struct diskraspr
{
	int x;
	double p;
};

void key(diskraspr*row, int nrow);
double probability();
double MathWait(diskraspr*row, int nrow);
double Dispercia(diskraspr*row, int nrow);

#endif
