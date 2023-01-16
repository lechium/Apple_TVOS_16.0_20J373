//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveData : PBCodable
{
    NSData *_receivedData;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002d832
@property(retain, nonatomic) NSData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000002d76b
- (unsigned long long)hash;	// IMP=0x001000000002d71e
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002d656
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002d5b8
- (void)copyTo:(id)arg1;	// IMP=0x001000000002d555
- (void)writeTo:(id)arg1;	// IMP=0x001000000002d4f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000002d321
- (id)dictionaryRepresentation;	// IMP=0x001000000002d271
- (id)description;	// IMP=0x001000000002d1c2
@property(readonly, nonatomic) _Bool hasReceivedData;
@property(readonly, nonatomic) _Bool hasTask;

@end

