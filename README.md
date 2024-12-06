# Embedded log library for ESP-IDF

This is a port of the library [eLog](https://github.com/X-Ryl669/eLog) to esp-idf.

Compared to the general library this version add the additional advantages:
* Possibility to store the log's ring buffer in RTC memory so it can survive deep sleep without being cleared
* Options are nicely modifiable via the usual menuconfig

