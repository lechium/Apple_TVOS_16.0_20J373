//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLProtocol.h>

@class AMSMockURLOverride;

__attribute__((visibility("hidden")))
@interface AMSMockNetworkProxy : NSURLProtocol
{
    AMSMockURLOverride *_currentOverride;	// 16 = 0x10
}

+ (void)_sync:(CDUnknownBlockType)arg1;	// IMP=0x0040000000244c69
+ (void)_removeOverride:(id)arg1;	// IMP=0x0040000000244b84
+ (void)_removeAllOverrides;	// IMP=0x0040000000244b47
+ (id)_executedOverrides;	// IMP=0x0040000000244af2
+ (id)canonicalRequestForRequest:(id)arg1;	// IMP=0x004000000024407b
+ (_Bool)canInitWithRequest:(id)arg1;	// IMP=0x0040000000243e3c
+ (void)removeOverride:(id)arg1;	// IMP=0x0040000000243d90
+ (void)clearOverrides;	// IMP=0x0040000000243d03
+ (void)addOverride:(id)arg1;	// IMP=0x0040000000243c20
+ (id)executedOverrides;	// IMP=0x0040000000243ad0
+ (id)registeredOverrides;	// IMP=0x004000000024396f
+ (id)_overrides;	// IMP=0x004000000024391a
- (void).cxx_destruct;	// IMP=0x0000000000244d44
@property(retain, nonatomic) AMSMockURLOverride *currentOverride; // @synthesize currentOverride=_currentOverride;
- (void)finishWithError:(id)arg1;	// IMP=0x0000000000244a7d
- (void)finishWithData:(id)arg1;	// IMP=0x00000000002449da
- (void)performRedirectFromResponse:(id)arg1;	// IMP=0x000000000024479b
- (void)sendResponse:(id)arg1;	// IMP=0x000000000024466b
- (void)stopLoading;	// IMP=0x0000000000244601
- (void)startLoading;	// IMP=0x0000000000244091

@end

