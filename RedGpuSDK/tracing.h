#pragma once

#ifdef __cplusplus
extern "C" {
#endif

void tracingSet(const char * label);
void tracingEnd(const char * label);
void tracingPrint();

#ifdef __cplusplus
}
#endif
