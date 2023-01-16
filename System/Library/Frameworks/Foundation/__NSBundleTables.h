//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSLock, NSMapTable, NSPointerArray;

__attribute__((visibility("hidden")))
@interface __NSBundleTables : NSObject
{
    NSLock *_lock;	// 8 = 0x8
    NSHashTable *_staticFrameworks;	// 16 = 0x10
    NSHashTable *_loadedBundles;	// 24 = 0x18
    NSHashTable *_loadedFrameworks;	// 32 = 0x20
    NSMapTable *_resolvedPathToBundles;	// 40 = 0x28
    NSMapTable *_bundleForClassMap;	// 48 = 0x30
    NSPointerArray *_immortalBundles;	// 56 = 0x38
}

- (void)dealloc;	// IMP=0x00000000005338a5
- (id)init;	// IMP=0x0000000000533753

@end

