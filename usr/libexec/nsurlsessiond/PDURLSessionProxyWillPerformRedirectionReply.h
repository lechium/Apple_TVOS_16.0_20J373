//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyRequest, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyWillPerformRedirectionReply : PBCodable
{
    PDURLSessionProxyRequest *_request;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000037453
@property(retain, nonatomic) PDURLSessionProxyRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000037372
- (unsigned long long)hash;	// IMP=0x0010000000037325
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003725d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000371bf
- (void)copyTo:(id)arg1;	// IMP=0x001000000003715c
- (void)writeTo:(id)arg1;	// IMP=0x00100000000370ff
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000036f12
- (id)dictionaryRepresentation;	// IMP=0x0010000000036e3d
- (id)description;	// IMP=0x0010000000036d8e
@property(readonly, nonatomic) _Bool hasRequest;
@property(readonly, nonatomic) _Bool hasTask;

@end
