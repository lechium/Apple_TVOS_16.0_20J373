//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

__attribute__((visibility("hidden")))
@interface WebMainThreadInvoker : NSProxy
{
    id target;	// 8 = 0x8
    struct RetainPtr<id> exception;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000010bf30
- (void).cxx_destruct;	// IMP=0x000000000010bf00
- (void)handleException:(id)arg1;	// IMP=0x000000000010beb0
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000010be90
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000010bdb0
- (id)initWithTarget:(id)arg1;	// IMP=0x000000000010bd90

@end

