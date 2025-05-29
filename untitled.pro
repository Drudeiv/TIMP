QT += testlib network  

CONFIG += c++17 cmdline  

# Опционально
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000

SOURCES += \
    test_hash.cpp

HEADERS += \
    sha1.hpp

# Настройки деплоя (для тестов обычно не нужны, но пусть будут)
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
