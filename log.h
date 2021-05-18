#ifndef __H_LOG_GAZETTE__
#define __H_LOG_GAZETTE__

#include <iostream>

#define ANSI_RED "\x1b[31m"
#define ANSI_GREEN "\x1b[32m"
#define ANSI_RESET "\x1b[0m"

#define LOG(text) (std::cout << "[" << __TIME__ << "] [" << __func__ << ":" << __LINE__ << "] - " text << std::endl)
#define LOG_ERR(text) (std::cout << ANSI_RED "[" << __TIME__ << "] [" << __func__ << ":" << __LINE__ << "] - " text ANSI_RESET << std::endl)
#define LOG_OK(text) (std::cout << ANSI_GREEN "[" << __TIME__ << "] [" << __func__ << ":" << __LINE__ << "] - " text ANSI_RESET << std::endl)

#endif
