//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ASCOfferContext : NSObject
{
    long long _flags;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001610b
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
- (id)description;	// IMP=0x00100000000162d9
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001621c
- (unsigned long long)hash;	// IMP=0x00100000000161b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000161aa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000016151
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000016113
@property(readonly, nonatomic) _Bool supportsDSIDLessInstall;
- (id)init;	// IMP=0x00100000000160e2
- (id)initWithFlags:(long long)arg1;	// IMP=0x00100000000160a5

@end

