#pragma once
#include "Human.h"
#include "PoorMan.h"
#include "BusinessMan.h"

void testDisplayAllParameters(Human* a);

void testTo_Eat(Human* a, Pasta* b);

void testTo_Cook(PoorMan a, Pasta* b);
void testToCook(BusinessMan a, Pasta* b);

void testHuman(Human* a, Pasta* b);