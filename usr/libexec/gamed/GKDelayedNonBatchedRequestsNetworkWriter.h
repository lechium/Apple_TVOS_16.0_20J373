//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKDataTransport, NSString;

@interface GKDelayedNonBatchedRequestsNetworkWriter
{
    NSString *_bagKey;	// 8 = 0x8
    GKDataTransport *_transport;	// 16 = 0x10
}

+ (id)writerWithTransport:(id)arg1 forBagKey:(id)arg2;	// IMP=0x00200000001c52d7
- (void).cxx_destruct;	// IMP=0x00200000001c58e2
@property(retain, nonatomic) GKDataTransport *transport; // @synthesize transport=_transport;
@property(retain, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c53e5
- (id)initWithTransport:(id)arg1 forBagKey:(id)arg2;	// IMP=0x00100000001c5347

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

