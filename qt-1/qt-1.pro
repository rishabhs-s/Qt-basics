HEADERS +=
QT+= core gui #QT libraries added
greaterThan(QT_MAJOR_VERSION,4) : QT+=widgets # greaterthan means we want to use version 5 and widget means its a widget application
SOURCES += \
    main.cpp
