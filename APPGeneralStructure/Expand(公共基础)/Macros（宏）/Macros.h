//
//  Header.h
//  APPGeneralStructure
//
//  Created by wangliqun on 2018/4/14.
//  Copyright © 2018年 https://github.com/2005wangliqun. All rights reserved.
//

#ifndef Header_h
#define Header_h
#define _LOG_DEBUG_ 1
#define _LOG_INFO_  0
#define _LOG_ERROR_ 0

#if _LOG_ERROR_
#define LogDebug(fmt, ...) ;
#define LogInfo(fmt, ...) ;
#define LogError(fmt, ...) NSLog((@"%s [ERROR] " fmt), __FUNCTION__, ##__VA_ARGS__)
#elif _LOG_INFO_
#define LogDebug(fmt, ...) ;
#define LogInfo(fmt, ...) NSLog((@"%s [INFO] " fmt), __FUNCTION__, ##__VA_ARGS__)
#define LogError(fmt, ...) NSLog((@"%s [ERROR] " fmt), __FUNCTION__, ##__VA_ARGS__)
#elif _LOG_DEBUG_
#define LogDebug(fmt, ...) NSLog((@"%s [DEBUG] " fmt), __FUNCTION__, ##__VA_ARGS__)
#define LogInfo(fmt, ...) NSLog((@"%s [INFO] " fmt), __FUNCTION__, ##__VA_ARGS__)
#define LogError(fmt, ...) NSLog((@"%s [ERROR] " fmt), __FUNCTION__, ##__VA_ARGS__)
#else
#define LogDebug(fmt, ...) ;
#define LogInfo(fmt, ...) ;
#define LogError(fmt, ...) ;
#endif


#endif /* Header_h */
