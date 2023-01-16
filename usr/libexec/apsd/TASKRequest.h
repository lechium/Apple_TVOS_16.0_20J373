//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class TASKInput;

@interface TASKRequest : PBRequest
{
    TASKInput *_input;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000007090e
@property(retain, nonatomic) TASKInput *input; // @synthesize input=_input;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000007088c
- (unsigned long long)hash;	// IMP=0x001000000007086f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000707d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007075d
- (void)copyTo:(id)arg1;	// IMP=0x001000000007073a
- (void)writeTo:(id)arg1;	// IMP=0x001000000007071d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000070710
- (id)dictionaryRepresentation;	// IMP=0x00100000000704cc
- (id)description;	// IMP=0x001000000007041d

@end
