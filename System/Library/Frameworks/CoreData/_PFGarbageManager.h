//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _PFGarbageManager : NSObject
{
    NSMutableDictionary *_storeLinksDirs;	// 8 = 0x8
    NSMutableSet *_filesToCleanUp;	// 16 = 0x10
}

+ (id)defaultInstance;	// IMP=0x0060000000075003
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000074ff6
+ (void)initialize;	// IMP=0x0060000000074f6f
- (id)autorelease;	// IMP=0x000000000007503a
- (_Bool)_tryRetain;	// IMP=0x0000000000075032
- (_Bool)_isDeallocating;	// IMP=0x000000000007502a
- (oneway void)release;	// IMP=0x0000000000075024
- (unsigned long long)retainCount;	// IMP=0x0000000000075019
- (id)retain;	// IMP=0x0000000000075010

@end

