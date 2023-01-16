//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyError, PDURLSessionProxySessionMessage;

@interface PDURLSessionProxySessionBecameInvalid : PBCodable
{
    PDURLSessionProxyError *_error;	// 8 = 0x8
    PDURLSessionProxySessionMessage *_session;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004fcce
@property(retain, nonatomic) PDURLSessionProxyError *error; // @synthesize error=_error;
@property(retain, nonatomic) PDURLSessionProxySessionMessage *session; // @synthesize session=_session;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000004fbed
- (unsigned long long)hash;	// IMP=0x001000000004fba0
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004fad8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004fa3a
- (void)copyTo:(id)arg1;	// IMP=0x001000000004f9d7
- (void)writeTo:(id)arg1;	// IMP=0x001000000004f97a
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000004f78d
- (id)dictionaryRepresentation;	// IMP=0x001000000004f6b8
- (id)description;	// IMP=0x001000000004f609
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasSession;

@end

