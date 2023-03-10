//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PDURLSessionProxySessionMessage;

@interface PDURLSessionProxyCreateSession : PBCodable
{
    NSData *_configuration;	// 8 = 0x8
    PDURLSessionProxySessionMessage *_session;	// 16 = 0x10
    _Bool _delegateImplementsDidReceiveResponse;	// 24 = 0x18
    _Bool _delegateImplementsSessionAuthChallenge;	// 25 = 0x19
    _Bool _delegateImplementsTaskAuthChallenge;	// 26 = 0x1a
    _Bool _delegateImplementsWillPerformRedirection;	// 27 = 0x1b
    _Bool _delegateImplementsWillSendRequest;	// 28 = 0x1c
    _Bool _supportsRedirects;	// 29 = 0x1d
    struct {
        unsigned int delegateImplementsDidReceiveResponse:1;
        unsigned int delegateImplementsSessionAuthChallenge:1;
        unsigned int delegateImplementsTaskAuthChallenge:1;
        unsigned int delegateImplementsWillPerformRedirection:1;
        unsigned int delegateImplementsWillSendRequest:1;
        unsigned int supportsRedirects:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000004af9
- (_Bool)delegateImplementsDidReceiveResponse;	// IMP=0x0010000000004ae9
@property(nonatomic) _Bool delegateImplementsWillPerformRedirection; // @synthesize delegateImplementsWillPerformRedirection=_delegateImplementsWillPerformRedirection;
@property(nonatomic) _Bool delegateImplementsTaskAuthChallenge; // @synthesize delegateImplementsTaskAuthChallenge=_delegateImplementsTaskAuthChallenge;
@property(nonatomic) _Bool delegateImplementsSessionAuthChallenge; // @synthesize delegateImplementsSessionAuthChallenge=_delegateImplementsSessionAuthChallenge;
@property(nonatomic) _Bool delegateImplementsWillSendRequest; // @synthesize delegateImplementsWillSendRequest=_delegateImplementsWillSendRequest;
@property(nonatomic) _Bool supportsRedirects; // @synthesize supportsRedirects=_supportsRedirects;
@property(retain, nonatomic) NSData *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) PDURLSessionProxySessionMessage *session; // @synthesize session=_session;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000004929
- (unsigned long long)hash;	// IMP=0x001000000000481d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000004614
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000044cd
- (void)copyTo:(id)arg1;	// IMP=0x00100000000043c1
- (void)writeTo:(id)arg1;	// IMP=0x0010000000004294
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000003d08
- (id)dictionaryRepresentation;	// IMP=0x0010000000003a3e
- (id)description;	// IMP=0x001000000000398f
@property(nonatomic) _Bool hasDelegateImplementsDidReceiveResponse;
- (void)setDelegateImplementsDidReceiveResponse:(_Bool)arg1;	// IMP=0x001000000000394a
@property(nonatomic) _Bool hasDelegateImplementsWillPerformRedirection;
@property(nonatomic) _Bool hasDelegateImplementsTaskAuthChallenge;
@property(nonatomic) _Bool hasDelegateImplementsSessionAuthChallenge;
@property(nonatomic) _Bool hasDelegateImplementsWillSendRequest;
@property(nonatomic) _Bool hasSupportsRedirects;
@property(readonly, nonatomic) _Bool hasConfiguration;
@property(readonly, nonatomic) _Bool hasSession;

@end

