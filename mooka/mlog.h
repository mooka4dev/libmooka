#ifndef _mooka_log_h_
#define _mooka_log_h_

enum MookaLogLevel
{
	MLL_TRACE = 0,
	MLL_DEBUG = 1,
	MLL_WARNING = 2,
	MLL_ERROR = 3,
	MLL_FATAL = 4,
};

#define MLOG(level, fmt, ...) printf("[%s]"fmt"\n", __FUNCTION__, ##__VA_ARGS__)
//printf("%s:%d[%s]"fmt"\n", __FILE__, __LINE__, __FUNCTION__, ##__VA_ARGS__)

#define MLOG_TRACE(fmt, ...) MLOG(MLL_TRACE, fmt, ##__VA_ARGS__)
#define MLOG_DEBUG(fmt, ...) MLOG(MLL_DEBUG, fmt, ##__VA_ARGS__)
#define MLOG_WARNING(fmt, ...) MLOG(MLL_WARNING, fmt, ##__VA_ARGS__)
#define MLOG_ERROR(fmt, ...) MLOG(MLL_ERROR, fmt, ##__VA_ARGS__)
#define MLOG_FATAL(fmt, ...) MLOG(MLL_FATAL, fmt, ##__VA_ARGS__)

#endif //_mooka_log_h_ 


