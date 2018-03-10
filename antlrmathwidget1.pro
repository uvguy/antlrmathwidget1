#-------------------------------------------------
#
# Project created by QtCreator 2018-03-10T10:20:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = antlrmathwidget1
TEMPLATE = app
CONFIG += c++14 no_keywords
# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    visitormath.cpp \
    parsererrorlistener.cpp


INCLUDEPATH += .

ANTLRDIR=
unix{
QMAKE_CXXFLAGS += -Wno-overloaded-virtual
}
android{ 
ANTLRDIR = 
INCLUDEPATH += $$ANTLRDIR/include/antlr4-runtime
LIBS += $$ANTLRDIR/lib/libantlr4-runtime.so
INCLUDEPATH +=generated
}

win32{
QMAKE_CXXFLAGS += /MP /wd4251 
ANTLRDIR=  
INCLUDEPATH  += $$ANTLRDIR/release/include/antlr4-runtime
CONFIG(debug,debug|release){
    LIBS += $$ANTLRDIR/debug/lib/antlr4-runtime.lib
}
CONFIG(release,debug|release){
    LIBS += $$ANTLRDIR/release/lib/antlr4-runtime.lib
}

}

SOURCES += generated/MathBaseListener.cpp \
                    generated/MathLexer.cpp generated/MathListener.cpp generated/MathVisitor.cpp generated/MathBaseVisitor.cpp \
                    generated/MathParser.cpp
HEADERS += generated/MathBaseListener.h \
                generated/MathLexer.h generated/MathParser.h generated/MathListener.h generated/MathVisitor.h generated/MathBaseVisitor.h \
    visitormath.h \
    parsererrorlistener.h

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui

contains(ANDROID_TARGET_ARCH,x86) {
    ANDROID_EXTRA_LIBS = \
        $$PWD/../../../qt/androidlibs/LIBANTLR4/lib/libantlr4-runtime.so
}

DISTFILES += \
    android/AndroidManifest.xml \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradlew \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew.bat

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android
