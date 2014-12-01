#ifndef STORAGE_H
#define STORAGE_H
#include <QString>
#include <QtCore>

class storage
{
public:
    storage();
    static QString getName();
    static int getDiff();
    static int getPoints();
    static void setName(const QString &);
    static void setDiff(const int &);
    static void setPoints(const int &);
private:
    static QString name;
    static int diff;
    static int points;
};

#endif // STORAGE_H
