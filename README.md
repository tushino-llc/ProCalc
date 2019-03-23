# ProCalc 
## A free powerful professional multifunctional calculator

## Brief usage description
### Usage:
	• Choose on of the sub-calculators to perform tasks:
 	• • Matrix calculator
 	• • Fractions calculator
 	• • Combinatorial stuff calculator
 	• • Polynomials calculator
 	• • Probability and statistics
 	• • Functions stuff

### Notes:
	• The program will go on forever 'till you press «No» in continue menu
	• Contact anton2920@gmail.com if any issue occurs
	• Enjoy! :)

## Installation guide
### General stuff
To install this program you need `libm.so` and `libSDL2.so` (see `Installation notes`) dynamic libraries.
Then perform: 
```bash
sh ./autogen.sh
./configure
make
sudo make install
```
After that, run `ldconfig(8)`.  Do `sudo ldconfig`, there's no harm in it.

### Installation notes
You can build ProCalc without SDL (SDL2), but it will have limited functionality. If you are sure, that you have `libSDL2.so` installed on your system, you can specify its path via `LDFLAGS`. For that, instead of `./configure` run `./configure LDFLAGS=-L/path/to/SDL2/lib`. To specify `SDL2.h` use `./configure CPPFLAGS=-I /path/to/SDL2/header`

## Licence
It distributes only under GPLv2 licence. Go to https://www.gnu.org/licenses/ for more information

## Copyright 
© 2019 Tushino Software LLC
