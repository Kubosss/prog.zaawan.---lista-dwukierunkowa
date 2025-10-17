#include "iterator.h"

iterator iterator::next(iterator it) {
    it.wsk = it.wsk->next;
    return it;
}
