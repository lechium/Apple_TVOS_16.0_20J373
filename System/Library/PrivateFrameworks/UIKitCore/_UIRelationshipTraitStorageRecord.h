//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UIRelationshipTraitStorageRecord : NSObject
{
    UITraitCollection *_traitCollection;	// 8 = 0x8
    NSSet *_addedObjects;	// 16 = 0x10
    NSSet *_removedObjects;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000007f963d
@property(readonly, nonatomic) NSSet *removedObjects; // @synthesize removedObjects=_removedObjects;
@property(readonly, nonatomic) NSSet *addedObjects; // @synthesize addedObjects=_addedObjects;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (id)description;	// IMP=0x00000000007f959f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007f951c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007f943d
- (id)initWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3;	// IMP=0x00000000007f9357

@end

