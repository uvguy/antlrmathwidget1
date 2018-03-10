# Simple Antlr4Math


 
An ANTLR4 C++ dummy math sample with Qt5 Widget.


This project was tested on windows and android platform with qtbase version dev branch. But, should work with 5.6+ and above.


-------------------------------
<b>What is the minimmum compiler requirement ?</b>


-The android ndk compiler version should be ndk r17 beta 1 and above. 

-Windows version require msvc2015 and above.

Note before building, you need to adjust path in ANTLRDIR variable from antlrmathwidget1.pro.

Note for android build, you need to adjust ANDROID_EXTRA_LIBS from antlrmathwidget1.pro to include 
your shared library antlr build.

 

![](https://raw.githubusercontent.com/uvguy/antlrmathwidget1/master/images/image.png "Running test on android")

MIT License.