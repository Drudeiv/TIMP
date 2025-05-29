#include <QtTest>
#include "sha1.hpp"

class Hash_Test : public QObject
{
    Q_OBJECT

public:
    Hash_Test() {}
    ~Hash_Test() {}

private slots:
    void testSha1Hashing();
};

void Hash_Test::testSha1Hashing()
{
    QString input = "hello";
    QByteArray result = messageToSha1(input);

    // Проверяем, что хеш корректный
    QVERIFY(result.contains("aaf4c61ddcc5e8a2dabede0f3b482cd9aea9434d")); // SHA-1 "hello"
    QVERIFY(result.contains("Hashing message: hello")); // Проверяем отладочный вывод
}

QTEST_APPLESS_MAIN(Hash_Test)
#include "test_hash.moc"
