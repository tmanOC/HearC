//
//  AppDelegate.h
//  casound
//
//  Created by Tielman Janse van Vuuren on 2015/06/22.
//  Copyright (c) 2015 tman. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@import AudioToolbox;
@interface AppDelegate : NSObject <NSApplicationDelegate>
@property (nonatomic) AudioQueueRef audioQueue;

@end

