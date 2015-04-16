#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>

class MyClass : public QObject
{
    Q_OBJECT
public:
    explicit MyClass(QObject *parent = 0);
    ~MyClass();

signals:

public slots:
};

#endif // MYCLASS_H
