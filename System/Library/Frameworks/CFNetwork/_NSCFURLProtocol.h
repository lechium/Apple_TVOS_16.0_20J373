//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSURLProtocol.h"

@interface _NSCFURLProtocol : NSURLProtocol
{
    struct _CFURLProtocol *_prot;	// 16 = 0x10
    struct NSCFURLProtocolClient *_client;	// 24 = 0x18
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;	// IMP=0x006000000008f144
+ (id)canonicalRequestForRequest:(id)arg1 task:(id)arg2;	// IMP=0x006000000008f0cd
+ (id)canonicalRequestForRequest:(id)arg1;	// IMP=0x006000000008f035
+ (_Bool)canInitWithRequest:(id)arg1;	// IMP=0x006000000008f00b
+ (_Bool)canInitWithTask:(id)arg1;	// IMP=0x006000000008efbc
+ (const struct InternalProtocolImplementation *)_cf_internalImpl;	// IMP=0x006000000008efb3
- (void)stopLoading;	// IMP=0x000000000008ec12
- (void)startLoading;	// IMP=0x000000000008eb94
- (void)dealloc;	// IMP=0x000000000008eb38
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;	// IMP=0x000000000008ea0f

@end
