QT += testlib network  # network добавлен, так как это часть клиент-серверного приложения

CONFIG += c++17 cmdline  # cmdline для явного указания консольного приложения

# Опционально: раскомментируйте для запрета устаревших API
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000

SOURCES += \
    test_music.cpp

HEADERS += \
    decode_music.hpp \

# Настройки деплоя (для тестов обычно не нужны, но пусть будут)
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
