//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ICPBDGSPlayerDelegateInfoToken : PBCodable
{
    double _expirationTimeInterval;	// 8 = 0x8
    unsigned long long _sessionID;	// 16 = 0x10
    NSString *_storefrontIdentifier;	// 24 = 0x18
    NSData *_token;	// 32 = 0x20
    struct {
        unsigned int expirationTimeInterval:1;
        unsigned int sessionID:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000683c2
- (unsigned long long)hash;	// IMP=0x0000000000068242
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000068121
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006803e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000067f90
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000067f83
- (id)dictionaryRepresentation;	// IMP=0x0000000000067e3b
- (id)description;	// IMP=0x0000000000067d8c

@end

