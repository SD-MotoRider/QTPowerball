#-------------------------------------------------
#
# Project created by QtCreator 2018-04-09T09:52:50
#
#-------------------------------------------------

QT += core
QT += gui
QT += network
QT += widgets
QT += printsupport

TARGET = PowerBall
TEMPLATE = app

RC_FILE = QtPowerball.rc

CONFIG += c++11

SOURCES += \
    main.cpp \
    PowerballReader.cpp \
    QuickPickDialog.cpp \
    PreferencesDialog.cpp \
    LottoWidget.cpp \
    PowerballPreferences.cpp \
    PowerballTracker.cpp \
    PowerballWindow.cpp

HEADERS  += \
    Draw.h \
    PowerballReader.h \
    QuickPickDialog.h \
    PreferencesDialog.h \
    LottoWidget.h \
    PowerballTracker.h \
    PowerballWindow.h \
    PowerballPreferences.h \
    resource.h

FORMS    += \
    QuickPickDialog.ui \
    PreferencesDialog.ui \
    LottoWidget.ui \
    PowerballWindow.ui

DISTFILES += \
    README.md \
    .gitignore \
    LICENSE \
    QtPowerball.ico
