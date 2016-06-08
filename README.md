# d*TREK

d*TREK is a suite of C++ classes and programs that is used to process X-ray diffraction data from area detectors. It supports processing of data from multiple detector types (imaging plates, CCDs and pixel arrays) and from multiple vendors (Rigaku, Mar, Dectris, Bruker and ADSC to name a few).

Development of d\*TREK begin in 1994 with a DOE grant (written by Jim Pflugrath and Ed Westbrook) to support the APS-1 CCD detector at the APS. In the years since, development of d\*TREK has been funded by Rigaku.

Please note that d\*TREK is not thread safe.

Also, note that because of licensing issues, the open source version of d\*TREK contains neither the Reqab absorption correction nor the absorption correction written by Higashi. It also does not make any use of collision file information during the strategy generation. Finally, this version does not require a license for operation.


# Introduction to building d*TREK
The d\*TREK command line programs are built from the command line using make. Depending on the operating system, there are specific makefiles that should be used; generally these are named _Makefile.$os_, where _$os_ is the name of the operating system (_Makefile.linux_ for Linux, etc).

# Linux
Building the command line programs on Linux is a two step process:

In the DTDISPLAY subdirectory, run the command  
>    `make -f Makefile.linux lib`  

In the DTTREK subdirectory, run the command  
>    `make -f Makefile.linux`  
