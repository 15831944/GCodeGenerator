#ifndef GEOMETRIETEXT_H
#define GEOMETRIETEXT_H

#include <QString>
#include <QMessageBox>
#include "text_zeilenweise.h"
#include "../eigeneStruncts/punkt.h"
#include "../eigeneFunktionen/umwandeln.h"
#include "punkt3d.h"
#include "strecke.h"
#include "bogen.h"
#include "kreis.h"
#include "zylinder.h"
#include "rechteck3d.h"
#include "wuerfel.h"
#include "../eigeneDefines/defines_geometrie.h"


class geometrietext
{
public:
    geometrietext();
    void clear();
    void zeilenvorschub();
    void add_punkt(punkt3d p);
    void add_strecke(strecke s);
    void add_bogen(bogen b);
    void add_kreis(kreis k);
    void add_zylinder(zylinder z);
    void add_rechteck(rechteck3d rec);
    void add_wuerfel(wuerfel w);

    inline QString get_text()
    {
        return text.get_text();
    }
    inline text_zeilenweise get_text_zeilenweise()
    {
        return text;
    }

private:
    uint                aktuelle_zeile;
    text_zeilenweise    text;

};

#endif // GEOMETRIETEXT_H
