//
// Created by mvenne on 07/01/2020.
//

#include "Courbes.h"

QEasingCurve easing(QEasingCurve::InOutQuad);

for (qreal t = 0.0; t < 1.0; t += 0.1)
qWarning() << "Effective progress" << t << "is" << easing.valueForProgress(t);

