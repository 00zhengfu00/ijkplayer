//
//  IJKMediaModule.h
//  IJKMediaPlayer
//
//  Created by ZhangRui on 13-9-25.
//  Copyright (c) 2013年 bilibili. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IJKMediaModule : NSObject

+ (IJKMediaModule *) sharedModule;
- (void) lockApp;
- (void) unlockApp;
- (BOOL) tryLockActiveApp;

#pragma mark AppDelegate

- (void)applicationWillResignActive:(UIApplication *)application;
- (void)applicationDidEnterBackground:(UIApplication *)application;

@end
