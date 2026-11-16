#if 0
brew install vulkan-loader
gcc -c /home/linuxbrew/RedGpuSDK/redgpu.c
gcc main.c redgpu.o /home/linuxbrew/.linuxbrew/lib/libvulkan.so
exit
#endif

#ifdef _WIN32
  #include "C:/RedGpuSDK/redgpu.h"
#else
  #include "/home/linuxbrew/RedGpuSDK/redgpu.h"
#endif

#include <stdlib.h> // For malloc, free
#include <stdio.h>  // For printf

int main() {
  RedContext redcontext = NULL;
  np(redCreateContext,
    malloc, malloc,
    free, free,
    optionalMallocTagged, NULL,
    optionalFreeTagged, NULL,
    debugCallback, NULL,
    sdkVersion, RED_SDK_VERSION_1_0_135,
    sdkExtensionsCount, 0,
    sdkExtensions, NULL,
    optionalProgramName, NULL,
    optionalProgramVersion, 0,
    optionalEngineName, NULL,
    optionalEngineVersion, 0,
    optionalSettings, NULL,
    outContext, &redcontext,
    outStatuses, NULL,
    optionalFile, __FILE__,
    optionalLine, __LINE__,
    optionalUserData, NULL
  );
  if (redcontext == NULL) {
    printf("Error: redcontext == NULL, exiting.\n");
  } else {
    printf("Success: redcontext is created successfully.\n");
  }

  np(redDestroyContext,
    context, redcontext,
    optionalFile, __FILE__,
    optionalLine, __LINE__,
    optionalUserData, NULL
  );
}
