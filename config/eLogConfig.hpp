#ifndef hpp_eLogConfig_hpp
#define hpp_eLogConfig_hpp

// Configuration is done via macros
#include "sdkconfig.h"
#include "esp_attr.h"

#define LogRingBufferSize       CONFIG_ESP_ELOG_BUFFER_SIZE
#define DeleteOldLogsWhenFull   CONFIG_ESP_ELOG_DELETE_OLD_LOG_IF_FULL

#define DontDefineStoreLogSizeType

#if CONFIG_ESP_ELOG_SIZE_TYPE == 1
   #define StoreLogSizeType uint8
#elif CONFIG_ESP_ELOG_SIZE_TYPE == 2
   #define StoreLogSizeType uint16
#elif CONFIG_ESP_ELOG_SIZE_TYPE == 0
#else
   #warning "Invalid size for this type"
#endif

#define ThrowOnError            CONFIG_ESP_ELOG_ERROR_TYPE

#ifdef CONFIG_ESP_ELOG_PERSISTENT_LOG
  #define BackupMemory RTC_NOINIT_ATTR
#else
  #define BackupMemory
#endif

#endif
