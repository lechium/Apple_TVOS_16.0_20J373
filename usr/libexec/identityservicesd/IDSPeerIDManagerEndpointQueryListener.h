//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IDSPeerIDManagerEndpointQueryListener : NSObject
{
    CDUnknownBlockType _queryCompletionBlock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000005ae790
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CDUnknownBlockType queryCompletionBlock; // @synthesize queryCompletionBlock=_queryCompletionBlock;
- (id)initWithQueryCompletionBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x00100000005ae650

@end

