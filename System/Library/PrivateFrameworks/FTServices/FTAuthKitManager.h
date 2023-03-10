//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAppleIDSession;
@protocol OS_dispatch_queue;

@interface FTAuthKitManager : NSObject
{
    AKAppleIDSession *_akAppleIDSession;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x006000000000fa9f
- (void).cxx_destruct;	// IMP=0x00000000000104f7
- (void)handleResponse:(id)arg1 forRequest:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010010
- (void)anisetteHeadersForRequest:(id)arg1 completionBlockQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000fbd7
- (id)init;	// IMP=0x000000000000faf4

@end

