//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSThreadSafeObject, NSArray;

__attribute__((visibility("hidden")))
@interface AMSThreadSafeSet : NSObject
{
    AMSThreadSafeObject *_backingSet;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002b94fb
@property(retain, nonatomic) AMSThreadSafeObject *backingSet; // @synthesize backingSet=_backingSet;
- (void)removeObject:(id)arg1;	// IMP=0x00000000002b93ef
- (void)addObject:(id)arg1;	// IMP=0x00000000002b92fe
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, copy, nonatomic) NSArray *allObjects;
- (id)init;	// IMP=0x00000000002b9011

@end
