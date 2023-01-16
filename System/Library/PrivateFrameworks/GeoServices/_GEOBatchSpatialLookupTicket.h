//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractTicket.h"

@class GEOMapServiceTraits, GEOSpatialLookupBatchRequest, GEOSpatialLookupBatchResponse, NSArray, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface _GEOBatchSpatialLookupTicket : GEOAbstractTicket
{
    GEOSpatialLookupBatchRequest *_request;	// 40 = 0x28
    GEOSpatialLookupBatchResponse *_response;	// 48 = 0x30
    NSArray *_parameters;	// 56 = 0x38
    NSMapTable *_parametersToMapItems;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000074abfc
- (CDStruct_d1a7ebee)dataRequestKind;	// IMP=0x000000000074abf1
- (id)mapItemsForParameters:(id)arg1;	// IMP=0x000000000074abd4
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x000000000074a8bd
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2 queue:(id)arg3;	// IMP=0x000000000074a8a3
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3;	// IMP=0x000000000074a350
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x000000000074a339
- (id)initWithRequest:(id)arg1 forParameters:(id)arg2 traits:(id)arg3;	// IMP=0x000000000074a23a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

