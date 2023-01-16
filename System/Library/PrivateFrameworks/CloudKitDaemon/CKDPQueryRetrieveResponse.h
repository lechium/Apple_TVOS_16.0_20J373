//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface CKDPQueryRetrieveResponse : PBCodable
{
    NSData *_continuationMarker;	// 8 = 0x8
    NSMutableArray *_queryResults;	// 16 = 0x10
}

+ (Class)queryResultsType;	// IMP=0x00100000002358f1
- (void).cxx_destruct;	// IMP=0x0000000000236559
@property(retain, nonatomic) NSData *continuationMarker; // @synthesize continuationMarker=_continuationMarker;
@property(retain, nonatomic) NSMutableArray *queryResults; // @synthesize queryResults=_queryResults;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000236395
- (unsigned long long)hash;	// IMP=0x0000000000236348
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000236280
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000236074
- (void)copyTo:(id)arg1;	// IMP=0x0000000000235f8a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000235e2a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000235e1d
- (id)dictionaryRepresentation;	// IMP=0x00000000002359c6
- (id)description;	// IMP=0x0000000000235917
@property(readonly, nonatomic) _Bool hasContinuationMarker;
- (id)queryResultsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002358d4
- (unsigned long long)queryResultsCount;	// IMP=0x00000000002358b7
- (void)addQueryResults:(id)arg1;	// IMP=0x000000000023584d
- (void)clearQueryResults;	// IMP=0x0000000000235830

@end

