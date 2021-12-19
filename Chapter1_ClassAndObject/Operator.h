#pragma once
#include "Figure.h"

std::istream& operator>>(std::istream& inDevice, Circle& cir);

std::ostream& operator<<(std::ostream& outDevice, Circle& cir);
