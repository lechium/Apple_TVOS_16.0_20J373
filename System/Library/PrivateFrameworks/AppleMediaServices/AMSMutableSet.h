//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableSet.h>

__attribute__((visibility("hidden")))
@interface AMSMutableSet : NSMutableSet
{
    NSMutableSet *_backingSet;	// 8 = 0x8
    CDUnknownBlockType _hashBlock;	// 16 = 0x10
}

+ (id)setWithHashBlock:(CDUnknownBlockType)arg1;	// IMP=0x006000000024ba7f
- (void).cxx_destruct;	// IMP=0x000000000024c3fd
@property(copy, nonatomic) CDUnknownBlockType hashBlock; // @synthesize hashBlock=_hashBlock;
- (id)_allObjectsFromBackingSet;	// IMP=0x000000000024c213
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000024c0d2
- (id)objectEnumerator;	// IMP=0x000000000024c082
- (id)member:(id)arg1;	// IMP=0x000000000024bde7
- (id)anyObject;	// IMP=0x000000000024bd8c
- (id)allObjects;	// IMP=0x000000000024bd7a
- (unsigned long long)count;	// IMP=0x000000000024bd5d
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x000000000024bc33
- (void)addObject:(id)arg1;	// IMP=0x000000000024bb64
- (id)initWithHashBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000024bacc

@end

