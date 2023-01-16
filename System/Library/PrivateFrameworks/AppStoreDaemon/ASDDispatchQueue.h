//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ASDDispatchQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)defaultQueue;	// IMP=0x0010000000032ba3
- (void).cxx_destruct;	// IMP=0x0000000000032c28
- (void)syncUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000032c17
- (void)asyncUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000032c06
- (void)assertQueue;	// IMP=0x0000000000032bf8
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000032b38
- (id)initWithName:(id)arg1;	// IMP=0x00000000000329d7
- (id)init;	// IMP=0x0000000000032942
- (void)scheduleBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000416b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
