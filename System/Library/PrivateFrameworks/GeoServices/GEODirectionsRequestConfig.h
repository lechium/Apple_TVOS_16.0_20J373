//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOServiceRequestDefaultConfig.h"

@class GEODirectionsRequest, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface GEODirectionsRequestConfig : GEOServiceRequestDefaultConfig
{
    NSNumber *_requestPriority;	// 8 = 0x8
    GEODirectionsRequest *_request;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000063603f
- (_Bool)usesBackgroundURL;	// IMP=0x0000000000636037
- (id)additionalStatesForNetworkEvent;	// IMP=0x0000000000635dfd
- (unsigned long long)multipathServiceType;	// IMP=0x0000000000635de6
- (CDStruct_d1a7ebee)dataRequestKindForRequest:(id)arg1 traits:(id)arg2;	// IMP=0x0000000000635ddb
- (id)serviceTypeNumber;	// IMP=0x0000000000635dbd
- (id)additionalHTTPHeaders;	// IMP=0x0000000000635ceb
- (id)additionalURLQueryItems;	// IMP=0x0000000000635b7e
- (unsigned long long)urlType;	// IMP=0x0000000000635b73
- (id)initWithRequest:(id)arg1 requestPriority:(id)arg2;	// IMP=0x0000000000635abe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

