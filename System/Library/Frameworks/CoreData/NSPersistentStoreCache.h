//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSPersistentStoreCache : NSObject
{
    id _externalData;	// 8 = 0x8
    unsigned long long _capacity;	// 16 = 0x10
    struct {
        long long _field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
        CDUnknownFunctionPointerType _field5;
    } *_externalDataValueCallbacks;	// 24 = 0x18
    struct persistentStoreCacheFlags _persistentStoreCacheFlags;	// 32 = 0x20
    struct os_unfair_lock_s _lock;	// 36 = 0x24
}

+ (void)initialize;	// IMP=0x006000000011ae18
- (void)dealloc;	// IMP=0x000000000011af77
- (id)initWithPersistentStore:(id)arg1;	// IMP=0x000000000011af65
- (id)init;	// IMP=0x000000000011af4a
- (id)initWithValueCallbacks:(void *)arg1 preserveToManyRelationships:(_Bool)arg2;	// IMP=0x000000000011aeb8

@end

