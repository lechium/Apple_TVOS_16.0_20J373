//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SNResultsObservingXPCProtocol><NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface SNResultsXPCPublisher : NSObject
{
    id <SNResultsObservingXPCProtocol><NSXPCProxyCreating> _subscriber;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000071d5b
- (void)requestDidComplete:(id)arg1;	// IMP=0x0000000000071cce
- (void)request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000071c2d
- (void)request:(id)arg1 didProduceResult:(id)arg2;	// IMP=0x0000000000071b8c
- (id)init;	// IMP=0x0000000000071a8b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

