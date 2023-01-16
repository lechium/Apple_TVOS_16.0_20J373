//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLHEndpointSelector, NSDateFormatter, NSMutableArray, NSOperationQueue, NSString, NSURLSession;
@protocol CLHNetworkControllerDelegate, OS_dispatch_queue;

@interface CLHNetworkController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    NSURLSession *_session;	// 24 = 0x18
    NSMutableArray *_activeTasks;	// 32 = 0x20
    NSDateFormatter *_dateFormatter;	// 40 = 0x28
    double _timeout;	// 48 = 0x30
    CLHEndpointSelector *_endpointSelector;	// 56 = 0x38
    id <CLHNetworkControllerDelegate> _delegate;	// 64 = 0x40
}

@property(retain, nonatomic) id <CLHNetworkControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CLHEndpointSelector *endpointSelector; // @synthesize endpointSelector=_endpointSelector;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000095578c
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0010000000955696
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000955423
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0010000000955103
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x001000000095501d
- (void)submitRequest:(id)arg1;	// IMP=0x0010000000954d6f
- (void)dealloc;	// IMP=0x0010000000954d17
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000954c54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

