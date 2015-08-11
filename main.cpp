#include <QApplication>
#include <QQmlApplicationEngine>
#include <QDebug>

#include "com.improvide/text.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;

    QPM_INIT(engine)

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    Text *t = new Text();

    return app.exec();
}
