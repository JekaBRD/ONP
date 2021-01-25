<h1>ONP</h1>

<h2><b>Description</b></h2>
The program translates an infix form to postfix (ONP) and postfix (ONP) form to infix.
<br>
<br>
<h2><b>Installation</b></h2>
Please make sure that you are using at least the 3.0 version of CMake or later and C++ compiler. 
<br> 
<br>
<h3><b>Linux/MacOS</b></h3>
<br>

```
cd ONP
mkdir build
cd build
cmake ..
make
./main
```

<br>
<h3><b>Windows</b></h3>
<i>Compiling for VS 2019</i>

```
cd ONP
mkdir build
cd build
cmake ..
.\ALL_BUILD.vcxproj
```
Then just run the VS solution.
<br>
<br>
<h2><b>Usage</b></h2>
The input data for the program should be in the file in the following format:

* the first line contains the number of expressions
* at the beginning of each line, you must specify the type of expression
  * INF for the infix form
  * ONP for the postfix form (ONP)

An example of data can be the following lines:

```
2
INF: x=~a*b/c-d+e%~f
ONP: xabcdefg++++++=
```

To test the program, you can use the file <i>Example_input.txt</i>

<i>The program was tested on Ubuntu 20.04.1</i>