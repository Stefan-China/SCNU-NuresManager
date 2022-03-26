#-------------------------------------------------
#
# Project created by QtCreator 2021-06-16T13:01:16
#
#-------------------------------------------------

QT       += core gui printsupport
QT       += widgets
QT       += serialport
QT       += core gui network concurrent xml
QT       += webenginewidgets
QT       += charts
QT       += sql   #华南脑控
QT       += multimedia
QT       += multimediawidgets  #摄像头
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11
DEFINES += QT_DEPRECATED_WARNINGS

TARGET = SCNU_WARD
TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS
MOC_DIR = $$OUT_PWD/mocfile
OBJECTS_DIR = $$OUT_PWD/objfile
UI_DIR = $$OUT_PWD/uifile
RCC_DIR = $$OUT_PWD/rcfile


SOURCES += main.cpp\
        mainwindow.cpp \
    titlebar/maintitlebar.cpp \
    titlebar/titlebar.cpp \
    titlebar/connecttipform.cpp \
    maincontent/controltabwidget.cpp \
    maincontent/controltreewidget.cpp \
    systemtray/systemtray.cpp \
    maincontent/controlwidget/cylindercontrol/cylinderwidget.cpp \
    maincontent/controlwidget/progresscontrol/progresswidget.cpp \
    flowlayout/flowlayout.cpp \
    maincontent/controlwidget/framecontrol/framewidget.cpp \
    maincontent/controlwidget/bannacontrol/bannacontrol.cpp \
    maincontent/controlwidget/bannacontrol/bannawidget.cpp \
    qcustomplot/qcustomplot.cpp \
    maincontent/controlwidget/plotcontrol/plotwidget.cpp \
    maincontent/controlwidget/plotcontrol/plotcontrol.cpp \
    maincontent/controlwidget/movecontrol/movewidget.cpp \
    maincontent/controlwidget/tablecontrol/tablewidget.cpp \
    numberanimation/numberanimation.cpp \
    maincontent/controlwidget/slidercontrol/sliderwidget.cpp \
    maincontent/controlwidget/openglcontrol/openglwidget.cpp \
    maincontent/controlwidget/processcontrol/processcontrol.cpp \
    maincontent/controlwidget/processcontrol/processwidget.cpp \
    maincontent/controlwidget/listcontrol/listwidget.cpp \
    screen/mainobject.cpp \
    screen/splashscreen.cpp \
    baidu_image/myimage.cpp \
    baidu_image/http.cpp \
    AliyunConnector/AliyunIoTClient.cpp \
    AliyunConnector/AliyunThingManager.cpp \
    AliyunConnector/AliyunSamrtWardConnector.cpp \
    hand_recieve/handrecieve.cpp \
    baidu_map/bridge.cpp \
    bci_tcp/tcpserver.cpp \
    maincontent/controlwidget/cylindercontrol/camera.cpp \
    maincontent/controlwidget/cylindercontrol/cylindercontrol.cpp \
    maincontent/controlwidget/cylindercontrol/informatiton_patient.cpp \
    maincontent/controlwidget/framecontrol/introduce_ai.cpp \
    maincontent/controlwidget/progresscontrol/progresscontrol.cpp \
    maincontent/controlwidget/progresscontrol/information_handband.cpp




HEADERS  += mainwindow.h \
    globaldef.hpp \
    titlebar/maintitlebar.h \
    titlebar/titlebar.h \
    titlebar/connecttipform.h \
    maincontent/controltabwidget.h \
    maincontent/controltreewidget.h \
    systemtray/systemtray.h \
    maincontent/controlwidget/cylindercontrol/cylinderwidget.h \
    maincontent/controlwidget/progresscontrol/progresswidget.h \
    flowlayout/flowlayout.h \
    maincontent/controlwidget/framecontrol/framewidget.h \
    maincontent/controlwidget/bannacontrol/bannacontrol.h \
    maincontent/controlwidget/bannacontrol/bannawidget.h \
    qcustomplot/qcustomplot.h \
    maincontent/controlwidget/plotcontrol/plotwidget.h \
    maincontent/controlwidget/plotcontrol/plotcontrol.h \
    maincontent/controlwidget/movecontrol/movewidget.h \
    maincontent/controlwidget/tablecontrol/tablewidget.h \
    numberanimation/numberanimation.h \
    maincontent/controlwidget/slidercontrol/sliderwidget.h \
    maincontent/controlwidget/openglcontrol/openglwidget.h \
    maincontent/controlwidget/processcontrol/processcontrol.h \
    maincontent/controlwidget/processcontrol/processwidget.h \
    maincontent/controlwidget/listcontrol/listwidget.h \
    screen/mainobject.h \
    screen/splashscreen.h \
    baidu_image/myimage.h \
    baidu_image/http.h \
    AliyunConnector/AliyunIoTClient.h \
    AliyunConnector/AliyunThingManager.h \
    AliyunConnector/Authorization.h \
    AliyunConnector/Constant.h \
    AliyunConnector/DateUtil.h \
    AliyunConnector/JsonHandle.h \
    AliyunConnector/AliyunSamrtWardConnector.h \
    hand_recieve/handrecieve.h \
    baidu_map/bridge.h \
    bci_tcp/tcpserver.h \
    bci_tcp/protocol.h \
    bci_tcp/sockethandler.h \
    maincontent/controlwidget/cylindercontrol/camera.h \
    maincontent/controlwidget/cylindercontrol/cylindercontrol.h \
    maincontent/controlwidget/cylindercontrol/informatiton_patient.h \
    maincontent/controlwidget/framecontrol/introduce_ai.h \
    maincontent/controlwidget/progresscontrol/progresscontrol.h \
    maincontent/controlwidget/progresscontrol/information_handband.h



FORMS    += mainwindow.ui \
    titlebar/maintitlebar.ui \
    maincontent/controltabwidget.ui \
    maincontent/controltreewidget.ui \
    maincontent/controlwidget/cylindercontrol/cylinderwidget.ui \
    maincontent/controlwidget/progresscontrol/progresswidget.ui \
    maincontent/controlwidget/framecontrol/framewidget.ui \
    maincontent/controlwidget/bannacontrol/bannacontrol.ui \
    maincontent/controlwidget/bannacontrol/bannawidget.ui \
    maincontent/controlwidget/plotcontrol/plotwidget.ui \
    maincontent/controlwidget/plotcontrol/plotcontrol.ui \
    maincontent/controlwidget/movecontrol/movewidget.ui \
    maincontent/controlwidget/tablecontrol/tablewidget.ui \
    maincontent/controlwidget/slidercontrol/sliderwidget.ui \
    maincontent/controlwidget/openglcontrol/openglwidget.ui \
    maincontent/controlwidget/processcontrol/processwidget.ui \
    maincontent/controlwidget/listcontrol/listwidget.ui \
    maincontent/controlwidget/processcontrol/processcontrol.ui \
    maincontent/controlwidget/cylindercontrol/camera.ui \
    maincontent/controlwidget/cylindercontrol/informatiton_patient.ui \
    maincontent/controlwidget/framecontrol/introduce_ai.ui \
    maincontent/controlwidget/progresscontrol/information_handband.ui

include     ($$PWD/LoginSystem/LoginSystem.pri)               #登录

RESOURCES += \
    res.qrc \
    res/shaders.qrc \
    res.qrc \
    map.qrc \
    maincontent/controlwidget/cylindercontrol/source.qrc

RC_FILE += myapp.rc

DISTFILES +=
include($(QT_DIR)/config/x8.config)
