#include <QCoreApplication>
#include <QDebug>
#include <QDate>
#include <QDateTime>
#include <QFile>
#include <QPair>

#include <iostream>
#include <algorithm>
#include <utility>
#include <string>
#include <vector>
#include <list>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    //need to include <QDebug>
//    qDebug() << "Hello, from Qt!";

//    //use this insted of "const char* " in Qt application
//    const char* chr {"Hello, from Qt! Again!"};
//    QByteArray ba{chr};
//    qDebug() << ba << "This string from QByteArray!";

//    //use this insted of "string" but in Qt application
//    QString str{"Hello, from Qt! And Again!"};
//    QString strWithArg{"String with %1 and %2 arguments."};
//    qDebug() << str << "This string from QString!"
//             << QString::number(12) << "Number as string"
//             << strWithArg.arg("first").arg("second");

//    QString additionalStr {"And some random string, for check!"};
//    std::string concatStrStd{"Concat strings"};
//    additionalStr += QString::fromStdString(concatStrStd);

//    QStringList strList{str};
//    strList << strWithArg.arg(1).arg(2) << additionalStr;
//    qDebug() << strList << strList.count();

//    //use this if you want to know current date and time
//    QDate date{QDate::currentDate()};
//    QDateTime dateTime{QDateTime::currentDateTime()};
//    qDebug() << date.toString(Qt::DefaultLocaleShortDate) << "Date, from QDate."
//             << dateTime.time().toString(Qt::ISODate)<< "Time, from QDateTime.";

//    //use this if you want to read from file
//    QFile file{"someCoolFile.txt"};
//    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
//    {
//        qDebug() << file.readAll()<< "This line readed from file with QFile.";
//    }

//    //Qt and std containers
//    //Vector
//    std::vector<int> vectStd {0, 9, 8, 7, 5, 6};
//    QVector<int> vectQt {1, 2, 3, 5, 4, 6};
//    qDebug() << vectQt;

//    vectQt = QVector<int>::fromStdVector(vectStd);
//    qDebug() << vectQt;

//    //List
//    QList<double> listQt {2.4, 1.2, 6.7, 2, 8.1, 0.4};
//    qDebug() << listQt;
//    std::sort(std::begin(listQt), std::end(listQt));

//    std::list<double> listStd {listQt.toStdList()};
//    std::for_each(std::begin(listStd), std::end(listStd), [](double item){std::cout << item << " ";});
//    std::cout << std::endl;

//    //Map and Hash
//    QMap<QString, int> mapQt {{"one", 1},
//                              {"two", 2},
//                              {"three", 3}};
//    qDebug() << mapQt["one"] << mapQt.value("two") << mapQt.key(3);

//    QHash<int, std::string> hashQt{{1,"one"},
//                                   {2,"two"},
//                                   {3,"three"}};

//    for(const auto& value : hashQt.values())
//    {
//        std::cout << value << " ";
//    }
//    std::cout << std::endl;

//    //pair
//    QPair<QString, double> piNumber{"PI", 3.14159265358979323846};
//    qDebug() << piNumber << piNumber.first << piNumber.second;

//    //Variant

//    QVariant variant;
//    variant = ba;
//    qDebug() << variant.toString();

    return a.exec();
}

