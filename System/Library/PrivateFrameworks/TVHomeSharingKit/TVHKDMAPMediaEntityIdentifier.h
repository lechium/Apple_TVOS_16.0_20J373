//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKMediaEntityIdentifier.h"

__attribute__((visibility("hidden")))
@interface TVHKDMAPMediaEntityIdentifier : TVHKMediaEntityIdentifier
{
    unsigned long long _nonPersistentID;	// 8 = 0x8
    unsigned long long _persistentID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000091c6b
+ (id)identifierFromEntity:(id)arg1;	// IMP=0x0010000000091a6a
@property(readonly, nonatomic) unsigned long long persistentID; // @synthesize persistentID=_persistentID;
@property(readonly, nonatomic) unsigned long long nonPersistentID; // @synthesize nonPersistentID=_nonPersistentID;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000922a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000091f69
- (unsigned long long)hash;	// IMP=0x0000000000091e8d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000091d89
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000091c73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000091c60
- (id)initWithProtocol:(unsigned long long)arg1 nonPersistentID:(unsigned long long)arg2 persistentID:(unsigned long long)arg3;	// IMP=0x0000000000091c0a
- (id)initWithProtocol:(unsigned long long)arg1;	// IMP=0x0000000000091b9b

@end
