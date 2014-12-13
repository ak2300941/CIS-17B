#include "storage.h"

QString storage::name="";
int storage::diff=0;
int storage::points=0;

storage::storage()
{
}

QString storage::getName()
{
    return storage::name;
}

int storage::getDiff()
{
    return storage::diff;
}

int storage::getPoints()
{
    return storage::points;
}

void storage::setName(const QString &n)
{
    storage::name=n;
}

void storage::setDiff(const int &d)
{
    storage::diff=d;
}

void storage::setPoints(const int &p)
{
    storage::points=p;
}
