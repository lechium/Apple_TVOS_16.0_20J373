//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _SCNUIKitSourceRegistry : NSObject
{
    NSMutableArray *_sources;	// 8 = 0x8
}

+ (void)unregisterUIKitSource:(id)arg1;	// IMP=0x006000000027c185
+ (void)registerUIKitSource:(id)arg1;	// IMP=0x006000000027c154
+ (id)sharedInstance;	// IMP=0x006000000027bed0
- (void)apply:(CDUnknownBlockType)arg1;	// IMP=0x000000000027c026
- (void)remove:(id)arg1;	// IMP=0x000000000027bfe1
- (void)add:(id)arg1;	// IMP=0x000000000027bf9c
- (void)dealloc;	// IMP=0x000000000027bf61
- (id)init;	// IMP=0x000000000027bf15

@end

