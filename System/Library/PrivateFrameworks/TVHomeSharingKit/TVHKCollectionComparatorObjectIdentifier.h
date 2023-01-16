//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface TVHKCollectionComparatorObjectIdentifier : NSObject
{
    NSObject<NSCopying> *_rootIdentifier;	// 8 = 0x8
    unsigned long long _collisionCount;	// 16 = 0x10
}

+ (id)new;	// IMP=0x00100000000477ad
- (void).cxx_destruct;	// IMP=0x0000000000047c58
@property(readonly, nonatomic) unsigned long long collisionCount; // @synthesize collisionCount=_collisionCount;
@property(readonly, copy, nonatomic) NSObject<NSCopying> *rootIdentifier; // @synthesize rootIdentifier=_rootIdentifier;
- (id)description;	// IMP=0x0000000000047b69
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000479b1
- (unsigned long long)hash;	// IMP=0x00000000000478fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000478c9
- (id)initWithRootIdentifier:(id)arg1 collisionCount:(unsigned long long)arg2;	// IMP=0x000000000004784b
- (id)init;	// IMP=0x00000000000477dc

@end

