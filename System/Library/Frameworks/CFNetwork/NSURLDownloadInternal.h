//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSURLAuthenticationChallenge;

@interface NSURLDownloadInternal : NSObject
{
    struct _CFURLDownload *cfDownload;	// 8 = 0x8
    struct _CFURLAuthChallenge *currCFChallenge;	// 16 = 0x10
    NSURLAuthenticationChallenge *currNSChallenge;	// 24 = 0x18
    id delegate;	// 32 = 0x20
    _Bool downloadActive;	// 40 = 0x28
    NSOperationQueue *_targetQueue;	// 48 = 0x30
}

- (void)dealloc;	// IMP=0x000000000022ce65

@end

