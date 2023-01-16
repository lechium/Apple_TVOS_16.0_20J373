//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class NSError, NSObject;
@protocol GSProtocol;

__attribute__((visibility("hidden")))
@interface GSDaemonProxySync : NSProxy
{
    NSObject<GSProtocol> *_target;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    id _result;	// 24 = 0x18
}

+ (id)proxy;	// IMP=0x001000000000372a
- (void).cxx_destruct;	// IMP=0x0000000000003a12
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (struct __CFError *)copyCFError;	// IMP=0x00000000000039ad
- (void)handleObjResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000000394c
- (void)handleBoolResult:(_Bool)arg1 error:(id)arg2;	// IMP=0x00000000000038da
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000038b3
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000000386b
- (void)finalize;	// IMP=0x000000000000383c
- (id)initWithXPCObject:(id)arg1;	// IMP=0x0000000000003564

@end

