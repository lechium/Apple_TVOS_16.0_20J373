//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, _TtC9storekitd6Client;

@interface LoadInAppProductsTask
{
    NSString *_logKey;	// 8 = 0x8
    _TtC9storekitd6Client *_client;	// 16 = 0x10
    NSArray *_productIdentifiers;	// 24 = 0x18
    long long _apiVersion;	// 32 = 0x20
    NSArray *_invalidIdentifiers;	// 40 = 0x28
    NSArray *_products;	// 48 = 0x30
    NSString *_serverCorrelationIdentifier;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000007d0c5
@property(readonly, nonatomic) NSString *serverCorrelationIdentifier; // @synthesize serverCorrelationIdentifier=_serverCorrelationIdentifier;
@property(readonly, nonatomic) NSArray *products; // @synthesize products=_products;
@property(readonly, nonatomic) NSArray *invalidIdentifiers; // @synthesize invalidIdentifiers=_invalidIdentifiers;
@property(readonly, nonatomic) long long apiVersion; // @synthesize apiVersion=_apiVersion;
@property(readonly, nonatomic) NSArray *productIdentifiers; // @synthesize productIdentifiers=_productIdentifiers;
@property(readonly, nonatomic) _TtC9storekitd6Client *client; // @synthesize client=_client;
- (id)_parseLegacyToMedia:(id)arg1;	// IMP=0x001000000007c27b
- (id)_parseMediaProducts:(id)arg1;	// IMP=0x001000000007b87b
- (id)_parseResponse:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007aa8b
- (id)_requestBatches:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007a2cc
- (id)_queryDictionary;	// IMP=0x0010000000079d48
- (id)_mediaAPIFetchWith:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007966f
- (id)_mediaClientIdentifier;	// IMP=0x001000000007963b
- (id)_mediaPlatformString;	// IMP=0x0010000000079627
- (id)_localeIdentifier;	// IMP=0x001000000007922d
- (id)_buildMediaAPIURLWith:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000078c3d
- (id)_newProductIdentifierAllowedCharacterSet;	// IMP=0x0010000000078bb0
- (id)_productIdentifierAllowedCharacterSet;	// IMP=0x0010000000078a8b
- (id)_processIdentifiers;	// IMP=0x0010000000078737
- (BOOL)_clientType;	// IMP=0x00100000000786f2
- (void)main;	// IMP=0x0010000000077daa
- (id)initWithProductIdentifiers:(id)arg1 client:(id)arg2 apiVersion:(long long)arg3;	// IMP=0x0010000000077cc4

@end

