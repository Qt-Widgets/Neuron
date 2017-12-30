#ifndef NEURONSIMPLETOKENVALIDATOR_H
#define NEURONSIMPLETOKENVALIDATOR_H

#include "neuronabstractdataencoder.h"

class NeuronSimpleTokenValidator : public NeuronAbstractDataEncoder
{
    QString _validateToken;
public:
    NeuronSimpleTokenValidator();

public:
    void encrypt(QVariantMap &map);
    bool decrypt(QVariantMap &map);

    QString validateToken() const;
    void setValidateToken(const QString &validateToken);

private:
    QString createValidateToken(QVariantMap &map);
};

#endif // NEURONSIMPLETOKENVALIDATOR_H