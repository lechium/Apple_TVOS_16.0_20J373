//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface _TtC10LinkDaemon18AutoShortcutClient : NSObject
{
    MISSING_TYPE *bundleID;	// 8 = 0x8
    MISSING_TYPE *registrySource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x004000000004e360
- (id)init;	// IMP=0x001000000004e300
- (void)retrieveSiriLanguageWithReply:(void (^)(NSString *, NSError *))arg1;	// IMP=0x001000000004e080
- (void)refreshAutoShortcutSubstitution:(NSArray *)arg1 reply:(void (^)(NSError *))arg2;	// IMP=0x001000000004dd10

@end
