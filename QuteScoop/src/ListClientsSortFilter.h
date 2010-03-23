/**************************************************************************
 *  This file is part of QuteScoop.
 *  Copyright (C) 2007-2008 Martin Domig <martin@domig.net>
 *
 *  QuteScoop is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  QuteScoop is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with QuteScoop.  If not, see <http://www.gnu.org/licenses/>
 **************************************************************************/

#ifndef LISTCLIENTSSORTFILTER_H
#define LISTCLIENTSSORTFILTER_H

#include <QSortFilterProxyModel>
#include <QtCore>

class ListClientsSortFilter : public QSortFilterProxyModel {

public:
    ListClientsSortFilter(QObject *parent = 0) : QSortFilterProxyModel(parent) {}

protected:
    virtual bool filterAcceptsRow(int source_row, const QModelIndex& source_parent) const;
    
};

#endif // LISTCLIENTSSORTFILTER_H