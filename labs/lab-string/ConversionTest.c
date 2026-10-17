#include <assert.h>
#include "Conversion.h"

/*
 * ConversionTest.c — Pruebas del modulo Conversion
 *
 * Mismas restricciones que StringTest.c:
 * solo assert, literales, sin salida a stdout.
 */

int main(void) {

    /* ── ToInteger — tiene un bug, estos tests ya estan activos ─────────── */
    assert(ToInteger("0") == 0);
    assert(ToInteger("1") == 1);
    assert(ToInteger("42") == 42);
    assert(ToInteger("-7") == -7);
    assert(ToInteger("100") == 100);

    /* ── ToDigit (operacion libre) ──────────────────────────────────────── */
    assert(ToDigit('0') == 0);
    assert(ToDigit('7') == 7);
    assert(ToDigit('9') == 9);
    assert(ToDigit('a') == -1);
    assert(ToDigit('/') == -1);
    assert(ToDigit(':') == -1);

    return 0;
}