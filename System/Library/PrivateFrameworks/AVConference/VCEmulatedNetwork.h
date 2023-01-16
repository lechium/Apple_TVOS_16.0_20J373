//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, VCEmulatedOutputQueue;

__attribute__((visibility("hidden")))
@interface VCEmulatedNetwork : NSObject
{
    NSDictionary *_policies;	// 8 = 0x8
    CDUnknownBlockType _pushCompletionHandler;	// 16 = 0x10
    CDUnknownBlockType _popCompletionHandler;	// 24 = 0x18
    VCEmulatedOutputQueue *_outputQueue;	// 32 = 0x20
    unsigned int _numberOfPacketsWaitingInOutputQueue;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType popCompletionHandler; // @synthesize popCompletionHandler=_popCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType pushCompletionHandler; // @synthesize pushCompletionHandler=_pushCompletionHandler;
@property(readonly, nonatomic) unsigned int numberOfPacketsWaitingInOutputQueue; // @synthesize numberOfPacketsWaitingInOutputQueue=_numberOfPacketsWaitingInOutputQueue;
- (void)runUntilTime:(double)arg1;	// IMP=0x00000000000781b0
- (id)copyPacketFromPop;	// IMP=0x0000000000078160
- (void)push:(id)arg1;	// IMP=0x0000000000078127
- (void)dealloc;	// IMP=0x00000000000780a3
- (id)initWithPolicies:(id)arg1;	// IMP=0x0000000000077fb4

@end

