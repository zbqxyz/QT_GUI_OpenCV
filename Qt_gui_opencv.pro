#-------------------------------------------------
#
# Project created by QtCreator 2013-08-10T15:06:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qt_gui_opencv
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

RESOURCES += \
    Toolbar.qrc

INCLUDEPATH += D:/Cv246/include
LIBS += D:/Cv246/lib/libopencv_calib3d246.dll.a
LIBS += D:/Cv246/lib/libopencv_contrib246.dll.a
LIBS += D:/Cv246/lib/libopencv_core246.dll.a
LIBS += D:/Cv246/lib/libopencv_features2d246.dll.a
LIBS += D:/Cv246/lib/libopencv_flann246.dll.a
LIBS += D:/Cv246/lib/libopencv_gpu246.dll.a
LIBS += D:/Cv246/lib/libopencv_highgui246.dll.a
LIBS += D:/Cv246/lib/libopencv_imgproc246.dll.a
LIBS += D:/Cv246/lib/libopencv_legacy246.dll.a
LIBS += D:/Cv246/lib/libopencv_ml246.dll.a
LIBS += D:/Cv246/lib/libopencv_nonfree246.dll.a
LIBS += D:/Cv246/lib/libopencv_objdetect246.dll.a
LIBS += D:/Cv246/lib/libopencv_photo246.dll.a
LIBS += D:/Cv246/lib/libopencv_stitching246.dll.a
LIBS += D:/Cv246/lib/libopencv_superres246.dll.a
LIBS += D:/Cv246/lib/libopencv_ts246.a
LIBS += D:/Cv246/lib/libopencv_video246.dll.a
LIBS += D:/Cv246/lib/libopencv_videostab246.dll.a
