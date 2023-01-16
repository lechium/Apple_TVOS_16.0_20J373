//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, geo_isolater;

@interface GEOWiFiQualityServiceLocalProxy : NSObject
{
    NSMutableDictionary *_inflightRequests;	// 8 = 0x8
    geo_isolater *_inflightIsolater;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000023540
- (void)cancelRequestId:(id)arg1;	// IMP=0x00100000000233ab
- (void)submitWiFiQualityTileLoadForKey:(id)arg1 eTag:(id)arg2 requestId:(id)arg3 auditToken:(id)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000230a5
- (void)submitWiFiQualityServiceRequest:(id)arg1 requestId:(id)arg2 auditToken:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000022dfa
- (id)init;	// IMP=0x0010000000022d70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

