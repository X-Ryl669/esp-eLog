#ifndef hpp_eLogConfig_hpp
#define hpp_eLogConfig_hpp

// Configuration is done via macros
#include "sdkconfig.h"

#define LogRingBufferSize       CONFIG_ESP_ELOG_BUFFER_SIZE
#define DeleteOldLogsWhenFull   CONFIG_ESP_ELOG_DELETE_OLD_LOG_IF_FULL
#define StoreLogSizeType        CONFIG_ESP_ELOG_SIZE_TYPE
#define ThrowOnError            CONFIG_ESP_ELOG_ERROR_TYPE

#ifdef CONFIG_ESP_ELOG_PERSISTENT_LOG
  #define BackupMemory RTC_NOINIT_ATTR
#else
  #define BackupMemory
#endif

#endif
