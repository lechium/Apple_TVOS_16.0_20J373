//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPListPosition;

@interface CKDPListRange : PBCodable
{
    CKDPListPosition *_left;	// 8 = 0x8
    CKDPListPosition *_right;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000024990f
@property(retain, nonatomic) CKDPListPosition *right; // @synthesize right=_right;
@property(retain, nonatomic) CKDPListPosition *left; // @synthesize left=_left;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000024982e
- (unsigned long long)hash;	// IMP=0x00000000002497e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000249719
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024967b
- (void)copyTo:(id)arg1;	// IMP=0x0000000000249618
- (void)writeTo:(id)arg1;	// IMP=0x00000000002495bb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002495ae
- (id)dictionaryRepresentation;	// IMP=0x0000000000249303
- (id)description;	// IMP=0x0000000000249254
@property(readonly, nonatomic) _Bool hasRight;
@property(readonly, nonatomic) _Bool hasLeft;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;	// IMP=0x000000000018fbf5

@end

