//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface LogTransactions : PBCodable
{
    NSMutableArray *_transactionIDs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00100000001f0228
- (unsigned long long)hash;	// IMP=0x00100000001f020b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001f0171
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001effd4
- (void)writeTo:(id)arg1;	// IMP=0x00100000001efea4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001efd27
- (id)dictionaryRepresentation;	// IMP=0x00100000001efccb
- (id)description;	// IMP=0x00100000001efc1c
- (id)formattedText;	// IMP=0x00100000000f7d0c

@end

