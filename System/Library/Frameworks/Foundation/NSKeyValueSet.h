//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@class NSKeyValueNonmutatingSetMethodSet, NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueSet : NSSet
{
    NSObject *_container;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSKeyValueNonmutatingSetMethodSet *_methods;	// 24 = 0x18
}

+ (id)_proxyShare;	// IMP=0x00100000004e90d8
- (id)objectEnumerator;	// IMP=0x00000000004e92ff
- (id)member:(id)arg1;	// IMP=0x00000000004e92d1
- (unsigned long long)count;	// IMP=0x00000000004e92a3
- (void)dealloc;	// IMP=0x00000000004e9246
- (void)_proxyNonGCFinalize;	// IMP=0x00000000004e91e7
- (CDStruct_a70f6672)_proxyLocator;	// IMP=0x00000000004e91cb
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000004e90ff

@end
