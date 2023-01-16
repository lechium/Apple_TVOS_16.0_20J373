//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PDURLSessionProxySessionMessage;

@interface PDURLSessionProxyOpenSocket : PBCodable
{
    NSString *_host;	// 8 = 0x8
    unsigned int _port;	// 16 = 0x10
    PDURLSessionProxySessionMessage *_session;	// 24 = 0x18
    NSString *_socketUUID;	// 32 = 0x20
    struct {
        unsigned int port:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000002beb
@property(nonatomic) unsigned int port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *socketUUID; // @synthesize socketUUID=_socketUUID;
@property(retain, nonatomic) PDURLSessionProxySessionMessage *session; // @synthesize session=_session;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000002aaf
- (unsigned long long)hash;	// IMP=0x0010000000002a16
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000028ed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000002809
- (void)copyTo:(id)arg1;	// IMP=0x0010000000002766
- (void)writeTo:(id)arg1;	// IMP=0x00100000000026c8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000002414
- (id)dictionaryRepresentation;	// IMP=0x00100000000022e3
- (id)description;	// IMP=0x0010000000002234
@property(nonatomic) _Bool hasPort;
@property(readonly, nonatomic) _Bool hasHost;
@property(readonly, nonatomic) _Bool hasSocketUUID;
@property(readonly, nonatomic) _Bool hasSession;

@end
