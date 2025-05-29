QByteArray messageToSha1(QString message) {
    qDebug() << "it`s funcition for transform message in sha1 hash\n";
    QByteArray byteArray = message.toUtf8();

    QByteArray hash = QCryptographicHash::hash(byteArray, QCryptographicHash::Sha1);

    QByteArray result;
    result.append("SHA-1 hash (hex): " + hash.toHex() + "\r\n");
    result.append("Hashing message: " + message.toUtf8() + "\r\n");

    return result;
}
