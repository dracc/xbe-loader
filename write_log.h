#ifndef __WRITE_LOG_H__
#define __WRITE_LOG_H__

void write_to_file(const char* text);
void write_log(const char* format, ...);
void write_log_crit(const char* format, ...);

#endif
