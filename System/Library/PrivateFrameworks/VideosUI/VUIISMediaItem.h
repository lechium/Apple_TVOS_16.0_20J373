//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/TVPBaseMediaItem.h>

@class NSData, NSDictionary, NSMutableArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIISMediaItem : TVPBaseMediaItem
{
    _Bool _disableScrubbing;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSURL *_tokenServerURL;	// 24 = 0x18
    NSURL *_stopServerURL;	// 32 = 0x20
    NSDictionary *_tokenServerParameters;	// 40 = 0x28
    NSString *_assetIDForStopping;	// 48 = 0x30
    long long _state;	// 56 = 0x38
    NSData *_certificateData;	// 64 = 0x40
    NSMutableArray *_requestsAwaitingCertFetch;	// 72 = 0x48
    unsigned long long _loadingContext;	// 80 = 0x50
}

+ (void)initialize;	// IMP=0x00100000000978d3
- (void).cxx_destruct;	// IMP=0x000000000009d6a4
@property(nonatomic) unsigned long long loadingContext; // @synthesize loadingContext=_loadingContext;
@property(retain, nonatomic) NSMutableArray *requestsAwaitingCertFetch; // @synthesize requestsAwaitingCertFetch=_requestsAwaitingCertFetch;
@property(retain, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *assetIDForStopping; // @synthesize assetIDForStopping=_assetIDForStopping;
@property(retain, nonatomic) NSDictionary *tokenServerParameters; // @synthesize tokenServerParameters=_tokenServerParameters;
@property(retain, nonatomic) NSURL *stopServerURL; // @synthesize stopServerURL=_stopServerURL;
@property(retain, nonatomic) NSURL *tokenServerURL; // @synthesize tokenServerURL=_tokenServerURL;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool disableScrubbing; // @synthesize disableScrubbing=_disableScrubbing;
- (void)_failKeyRequests:(id)arg1 withError:(id)arg2;	// IMP=0x000000000009d17c
- (void)_sendURLRequestToServer:(id)arg1 forKeyRequest:(id)arg2 attemptNumber:(unsigned long long)arg3;	// IMP=0x000000000009c580
- (void)_sendKeyRequestsToServer:(id)arg1 token:(id)arg2;	// IMP=0x000000000009c09a
- (double)_randomRetryDelayForFailedAttemptNumber:(unsigned long long)arg1;	// IMP=0x000000000009c052
- (_Bool)_allowedToRetryRequestForError:(id)arg1 response:(id)arg2;	// IMP=0x000000000009bf55
- (void)_fetchTokenForAssetID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009b32b
- (void)_sendStopForAssetID:(id)arg1;	// IMP=0x000000000009b191
- (id)_linearServiceRequestForURL:(id)arg1 assetID:(id)arg2;	// IMP=0x000000000009af37
- (void)_generateKeyRequestDataForKeyRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009a84b
- (void)_startKeyRequests:(id)arg1 token:(id)arg2;	// IMP=0x000000000009a39d
- (void)_loadCertificateDataFromURL:(id)arg1 loadingContext:(unsigned long long)arg2 attemptNumber:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000099a7c
- (void)_parseCertificateURL:(id *)arg1 keyServerURL:(id *)arg2 assetID:(id *)arg3 fromKeyRequest:(id)arg4;	// IMP=0x0000000000099569
- (id)_assetIDDataForKeyRequest:(id)arg1;	// IMP=0x00000000000994a0
- (id)_assetIDForKeyRequest:(id)arg1;	// IMP=0x0000000000099461
- (id)_keyServerURLForKeyRequest:(id)arg1;	// IMP=0x0000000000099421
- (id)_certificateURLForKeyRequest:(id)arg1;	// IMP=0x00000000000993e1
- (void)loadFairPlayStreamingKeyRequests:(id)arg1;	// IMP=0x0000000000097fde
- (void)cleanUpMediaItem;	// IMP=0x0000000000097f1e
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x0000000000097ce4
- (_Bool)hasTrait:(id)arg1;	// IMP=0x0000000000097c1f
- (_Bool)isEqualToMediaItem:(id)arg1;	// IMP=0x0000000000097b61
- (id)mediaItemURL;	// IMP=0x0000000000097b4f
- (id)initWithURL:(id)arg1 tokenServerURL:(id)arg2 stopServerURL:(id)arg3 tokenServerParameters:(id)arg4;	// IMP=0x0000000000097923

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

