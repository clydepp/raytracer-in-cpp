# raytracer-in-cpp
> Ray tracing calculates the intersection of rays (essentially lines) with scene geometry.
## Motivation
I took interest in my year 2 IAC module, and this inspired me to design and write a fundamental part of a CPU or GPU. I deduced that writing a raytracer would ultimately benefit me as:
* I would develop my use of C++ and Linux
* I could use my knowledge of linear algebra and vectors in a ray/path tracing context
* this would challenge me (and allow me to get creative)

## Implementation notes
### Provided raytracer program
Load the provided `raytracer.cpp` file into an Ubuntu environment. The code below can be run in a GitBash terminal, and this compiles the program - creating a `raytracer.exe` executable file.
```
c++ -O3 -o raytracer raytracer.cpp
```
To generate a `untitled.ppm` file (by running the executable), run this code in the terminal next:
```
./raytracer
```
