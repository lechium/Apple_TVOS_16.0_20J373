//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyCancelTask : PBCodable
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003d4f9
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003d477
- (unsigned long long)hash;	// IMP=0x001000000003d45a
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003d3c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003d348
- (void)copyTo:(id)arg1;	// IMP=0x001000000003d31e
- (void)writeTo:(id)arg1;	// IMP=0x001000000003d2fa
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003d15a
- (id)dictionaryRepresentation;	// IMP=0x001000000003d0d0
- (id)description;	// IMP=0x001000000003d021
@property(readonly, nonatomic) _Bool hasTask;

@end

