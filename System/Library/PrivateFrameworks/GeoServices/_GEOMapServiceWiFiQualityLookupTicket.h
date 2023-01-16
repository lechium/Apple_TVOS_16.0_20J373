//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractTicket.h"

@class GEOWiFiQualityServiceRequest, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapServiceWiFiQualityLookupTicket : GEOAbstractTicket
{
    GEOWiFiQualityServiceRequest *_request;	// 40 = 0x28
    NSString *_tileKey;	// 48 = 0x30
    NSString *_eTag;	// 56 = 0x38
    NSString *_requestID;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000075742f
@property(readonly, nonatomic) CDStruct_d1a7ebee dataRequestKind;
- (void)_cancel;	// IMP=0x00000000007573a7
- (void)cancelTileLoad;	// IMP=0x0000000000757395
- (void)submitTileLoadWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000075706a
- (void)cancelLocationSearch;	// IMP=0x0000000000757016
- (void)submitLocationSearchWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000756f01
- (void)cancelNetworkSearch;	// IMP=0x0000000000756eef
- (void)submitNetworkSearchWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000756c5d
- (id)initWithTileKey:(id)arg1 eTag:(id)arg2 requestId:(id)arg3;	// IMP=0x0000000000756bc1
- (id)initWithRequest:(id)arg1 requestId:(id)arg2;	// IMP=0x0000000000756b5f
- (id)initWithRequestID:(id)arg1;	// IMP=0x0000000000756aef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
