# libscheme
A fork of Brent Benson's libscheme.

The original source code libscheme-0.5.tar.gz (see: ftp://ftp.cs.indiana.edu/pub/scheme-repository/imp/libscheme-0.5.tar.gz) was downloaded from the [Indiana University Bloomington Scheme Repository](https://www.cs.indiana.edu/scheme-repository/home.html).

## Known Issues

The original code used a garbage collection library that I cannot get to compile, this means that it constantly leaks memory. This is fine if its being used for toying with scheme (like following along with SICP) but probably not useful for anything more. I will try to get a working compile of the GC library or some other solution to this problem.
