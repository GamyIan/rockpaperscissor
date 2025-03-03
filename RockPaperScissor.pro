# Rock-Paper-Scissors.pro

# Define the Qt modules required
QT       += core gui widgets

# Include additional modules if needed, for example:
# QT      += multimedia

# Target configuration
CONFIG   += c++17 console

# Define the project name
TARGET = RockPaperScissors
TEMPLATE = app

# Source files
SOURCES += \
    main.cpp \
    game.cpp \
    rpsgame.cpp

# Header files
HEADERS += \
    functions.h \
    rpsgame.h

# UI forms
FORMS += \
    rpsgame.ui

# Additional settings (adjust as needed)
# You can add libraries or extra configuration here
