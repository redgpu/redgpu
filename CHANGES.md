Oct 03, 2021:

  * **NEW**: `redgpu_array_timestamp.h` extension.
  * REDGPU debug library: RedStatuses::statusFile and RedStatuses::statusErrorFile strings are now printed in quotes.

Sep 19, 2021:

  * **NEW**: `redgpu_context_from_vk.h::RedContextOptionalSettingsContextFromVkGetInstanceProcAddr` struct.

Sep 07, 2021:

  * **NEW**: `redgpu_computing_language.h` extension.
  * **NEW**: `redgpu_context_from_vk.h` context optional settings.
  * Minor improvement to internal GPU statuses setting of redCreateContext.
  * Status code info strings are now set to RedStatuses::statusErrorDescription.

Aug 25, 2021:

  * Fix redCreatePresent::outStatuses setting that could incorrectly set ::statusProcedureId and ::statusErrorProcedureId to RED_PROCEDURE_ID_redQueuePresent.
  * Internal statuses setting optimizations.

Aug 11, 2021:

  * Release REDGPU under Apache License, Version 2.0.
