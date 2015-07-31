#include <QApplication>
#include <QQmlApplicationEngine>
#include <QDebug>

#include "switch/text.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;

    engine.addImportPath(QStringLiteral("qrc:/"));

    qDebug() << engine.importPathList();

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    Text *t = new Text();

    return app.exec();
}
