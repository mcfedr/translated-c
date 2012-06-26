//
//  main.c
//  Russian
//
//  Created by Fred Cox on 26.06.12.
//  Copyright (c) 2012 ekreative. All rights reserved.
//

#include <stdio.h>
#include "Russian.h"

tseloe glavnyi(tseloe argc, postoyannaya simvol *argv[])
{
    esli(argc > 1) {
        pechat("Hello %s, World!\n", argv[1]);
    }
    ili {
        pechat("Hello, World!\n");
    }
    vozvrashchat 0;
}
