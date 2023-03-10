//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TrustURLSessionDelegate : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *__taskContextMap;	// 16 = 0x10
    NSMutableDictionary *__serverMap;	// 24 = 0x18
    NSMutableDictionary *__timerMap;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000049043
@property(retain) NSMutableDictionary *_timerMap; // @synthesize _timerMap=__timerMap;
@property(retain) NSMutableDictionary *_serverMap; // @synthesize _serverMap=__serverMap;
@property(retain) NSMutableDictionary *_taskContextMap; // @synthesize _taskContextMap=__taskContextMap;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000048d9f
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000048c80
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0010000000048361
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00100000000481a7
- (_Bool)fetchNext:(id)arg1 context:(id)arg2;	// IMP=0x0010000000047b35
- (id)createNextRequest:(id)arg1 context:(id)arg2;	// IMP=0x0010000000047932
- (id)timeoutEntryForServer:(id)arg1;	// IMP=0x001000000004786f
- (void)incrementCountForServer:(id)arg1;	// IMP=0x00100000000476bf
- (void)addServer:(id)arg1;	// IMP=0x00100000000475f4
- (void);	// IMP=0x0010000000047519
- (id)createTimerForTask:(id)arg1;	// IMP=0x0010000000047317
- (void)cancelTimer:(id)arg1;	// IMP=0x001000000004720b
- (id)addTask:(id)arg1;	// IMP=0x0010000000047130
- (void)removeTask:(id)arg1;	// IMP=0x001000000004707e
- (id)contextForTask:(id)arg1;	// IMP=0x0010000000046fbb
- (id)init;	// IMP=0x0010000000046e3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

