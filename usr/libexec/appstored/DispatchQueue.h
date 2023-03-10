//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface DispatchQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)defaultQueue;	// IMP=0x00200000001023a0
- (void).cxx_destruct;	// IMP=0x0010000000102425
- (void)syncUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000102414
- (void)asyncUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000102403
- (void)assertQueue;	// IMP=0x00100000001023f5
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000102335
- (id)initWithName:(id)arg1;	// IMP=0x00100000001021d4
- (id)init;	// IMP=0x001000000010213f
- (void)scheduleBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000041ec4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

