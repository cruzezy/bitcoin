// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef NETGOLD_QT_NETGOLDADDRESSVALIDATOR_H
#define NETGOLD_QT_NETGOLDADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class NetgoldAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit NetgoldAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Netgold address widget validator, checks for a valid netgold address.
 */
class NetgoldAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit NetgoldAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // NETGOLD_QT_NETGOLDADDRESSVALIDATOR_H
