//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAppleIDAuthenticationContext, AKClient, NSData, NSDictionary, NSString, NSURL;

@interface AKURLRequestProviderImpl : NSObject
{
    _Bool _shouldCacheResource;	// 8 = 0x8
    NSDictionary *authKitBody;	// 16 = 0x10
    AKClient *_client;	// 24 = 0x18
    NSString *_urlBagKey;	// 32 = 0x20
    NSURL *_requestURL;	// 40 = 0x28
    NSData *_authKitBodyData;	// 48 = 0x30
    NSString *_dataCenterIdentifier;	// 56 = 0x38
    AKAppleIDAuthenticationContext *_context;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000017f34
@property(retain, nonatomic) AKAppleIDAuthenticationContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *dataCenterIdentifier; // @synthesize dataCenterIdentifier=_dataCenterIdentifier;
@property(copy, nonatomic) NSData *authKitBodyData; // @synthesize authKitBodyData=_authKitBodyData;
@property(nonatomic) _Bool shouldCacheResource; // @synthesize shouldCacheResource=_shouldCacheResource;
@property(copy, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(readonly, copy, nonatomic) NSString *urlBagKey; // @synthesize urlBagKey=_urlBagKey;
@property(retain, nonatomic) AKClient *client; // @synthesize client=_client;
@property(copy, nonatomic) NSDictionary *authKitBody; // @synthesize authKitBody;
- (_Bool)appendRequestUrlQueryParameterNamed:(id)arg1 value:(id)arg2;	// IMP=0x0010000000017cf3
- (_Bool)signRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000017cae
- (id)serverCompatibleRequestBodyWithPayload:(id)arg1;	// IMP=0x0010000000017bdc
@property(readonly, copy, nonatomic) NSDictionary *serverCompatibleRequestBody;
- (_Bool)_validateErrorCode:(id)arg1 withKey:(id)arg2;	// IMP=0x0010000000017ad9
- (_Bool)_validateResponseBodyFormat;	// IMP=0x0010000000017a6a
- (_Bool)_validateDataExists:(id)arg1;	// IMP=0x00100000000179c8
- (_Bool)_validateJSONResponseData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000177ec
- (_Bool)validateResponseData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000017394
- (id)_errorFromResponseDictionary:(id)arg1;	// IMP=0x0010000000016f81
- (id)responseDictionaryWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000016dd7
- (unsigned long long)requestBodyType;	// IMP=0x0010000000016dcf
- (unsigned long long)expectedResponseType;	// IMP=0x0010000000016dc7
- (id)buildRequest:(id *)arg1;	// IMP=0x0010000000016a36
- (void)_setRequestURL;	// IMP=0x001000000001699c
- (id)initWithContext:(id)arg1 urlBagKey:(id)arg2 shouldCacheResource:(_Bool)arg3;	// IMP=0x0010000000016919
- (id)initWithContext:(id)arg1 urlBagKey:(id)arg2;	// IMP=0x0010000000016904
- (id)initWithContext:(id)arg1;	// IMP=0x0010000000016872

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

