//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface NSObservedValue : NSObject
{
    id _contents;	// 8 = 0x8
    id _lastOriginator;	// 16 = 0x10
    int _tag;	// 24 = 0x18
}

- (id)copyToHeap;	// IMP=0x00000000004def5b
- (id)debugDescription;	// IMP=0x00000000004dee93
- (_Bool)_isToManyChangeInformation;	// IMP=0x00000000004dee7d
@property _Bool finished;
@property(retain) NSError *error;
@property(retain) id value;
- (void)dealloc;	// IMP=0x00000000004ded3a
- (id)description;	// IMP=0x00000000004ded28

@end

