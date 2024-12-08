set(srcs)

list(APPEND srcs "lib/elog.cpp")


idf_component_register(SRCS ${srcs}
                       INCLUDE_DIRS "lib/include" "config"
                      )
