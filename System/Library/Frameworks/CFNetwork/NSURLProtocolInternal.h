//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCachedURLResponse, NSURLRequest;
@protocol NSURLProtocolClient;

@interface NSURLProtocolInternal : NSObject
{
    id <NSURLProtocolClient> client;	// 8 = 0x8
    NSURLRequest *request;	// 16 = 0x10
    NSCachedURLResponse *cachedResponse;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x000000000008e197

@end

